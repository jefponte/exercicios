package br.com.jefponte.jogodecartas;

import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

import javax.swing.AbstractAction;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

import br.com.jefponte.janela.LabelDaCarta;

public class JogoVinteEUm extends JPanel implements ActionListener{
	
	protected Deck deck;
	protected ArrayList<Jogador> jogadores;
	public static final String REGRAS = "...\n";
	public static final String COMANDOS = ""
			+ "ajuda: Ver Comandos e Regras. \n "
			+ "config: para editar jogadores e baralhos da partida. \n"
			+ "jogar: inicia a partida. Caso não haja pelo menos dois \n"
			+ "jogadores o jogo cria automaticamente jogadores humanos \n"
			+ "para jogar. Se não houver Baralhos inseridos, um é \n"
			+ "inserido automaticamente.\n " + "Comandos dentro do jogo:\n"
			+ "comprar:  Comando feito na vez de um jogador para retirar \n"
			+ "uma carta do deck"
			+ "parar: comando feito na vez de um jogador para passar a vez\n"
			+ "";

	public static final String AJUDA = "ajuda";
	public static final String RESET= "reset";
	public static final String COMPRAR = "comprar";
	public static final String PARAR = "parar";
	public static final String CONFIGURAR = "config";
	public static final String JOGAR = "jogar";
	public static final int EMBARALHAR = 1234;
	public static final int PUXAR = 12;

	private int indexDoJogadorDaVez;
	private ArrayList<Jogador> jogadoresEliminadosDaPartida;
	private ArrayList<Jogador> jogadoresNaPartidaEmCurso;
	private boolean partidaEmCurso;
	private JButton botaoPuxar;
	private JButton embaralhar;
	private LabelDaCarta labelDaCarta;
	
	public JogoVinteEUm() {
		
		
		this.embaralhar = new JButton("Embaralhar");
		this.embaralhar.addActionListener(new EventoElaborado(EMBARALHAR));
		this.add(this.embaralhar);
		
		this.botaoPuxar = new JButton("Puxar");
		this.botaoPuxar.addActionListener(new EventoElaborado(PUXAR));
		
		
		this.labelDaCarta = new LabelDaCarta();
		this.setLayout(new FlowLayout());
		this.add(this.labelDaCarta);
		this.deck = new Deck(1);
		this.jogadores = new ArrayList<Jogador>();
		this.partidaEmCurso = false;
		this.jogadoresEliminadosDaPartida = new ArrayList<Jogador>();
		this.jogadoresNaPartidaEmCurso = new ArrayList<Jogador>();
		this.setBackground(Color.GRAY);
		this.botaoPuxar = new JButton("Puxar Carta");
		this.add(this.botaoPuxar);
		this.botaoPuxar.addActionListener(this);
		this.deck = new Deck(1);
		
		

	}

	public void primeiraTela() {
		// System.out.println(JogoVinteEUm.COMANDOS);
		Scanner entrada = new Scanner(System.in);

		String resposta;
		do {
			String mensagem = "";
		

			if (this.partidaEmCurso && (this.jogadoresNaPartidaEmCurso.size()) > 1) 
			{

				/*
				 * antes de jogar vamos mostrar os jogadores da partida.
				 */
				this.mostrarJogadores();

				mensagem = "Sua vez de jogar, "
						+ this.jogadoresNaPartidaEmCurso.get(this.indexDoJogadorDaVez)
								.getNome()
						+ ". Lembre-se! comprar para retirar uma carta do deck e parar para passar a vez: ";
				System.out.println(mensagem);
				if(this.jogadoresNaPartidaEmCurso.get(this.indexDoJogadorDaVez).getHumano()){
					resposta = entrada.next();
				}else
				{
					if(this.retornaPontuacao(this.jogadoresNaPartidaEmCurso.get(this.indexDoJogadorDaVez)) < 18){
						resposta = "comprar";
					}else{
						resposta = "parar";
					}
				}

				this.executaComando(resposta);

			} else if (this.partidaEmCurso
					&& (this.jogadoresNaPartidaEmCurso.size()) == 1) {
				// Se a partida está em curso e os jogadores são apenas um no
				// jogo, temos um campeao e falseamos a partida.

				
						
				Jogador campeao = this.jogadoresNaPartidaEmCurso.get(0);
				mensagem = "Temos um campeão! Parabéns, "+campeao.getNome();
				campeao.incrementaNumeroDeVitorias();
				System.out.println(mensagem);

				Collections.rotate(this.jogadores, 1);
				
				this.mostrarJogadoresDoJogo();
				this.jogadoresEliminadosDaPartida.clear();
				this.jogadoresNaPartidaEmCurso.clear();
				for(Jogador entrando: this.jogadores){
					this.jogadoresNaPartidaEmCurso.add(entrando);
				}
				this.todosDevolvendoAsCartas();
				this.deck.embaralhar();
				
				this.partidaEmCurso = false;

			} else if (!this.partidaEmCurso) {
				// Se a partida não está em curso
				System.out
						.println("Olá! Digite ajuda para ver comandos e regras. Jogar para começar e config para configurar o jogo: ");
				resposta = entrada.next();
				this.executaComando(resposta);

			}

		} while (true);
	}
	public void zerarPartidaSemZerarJogadores()
	{
		this.todosDevolvendoAsCartas();
		this.jogadoresNaPartidaEmCurso.clear();
		this.deck.embaralhar();
		this.partidaEmCurso = false;
		this.jogadoresEliminadosDaPartida.clear();
		this.porJogadoresNaPartida();
	}
	public void porJogadoresNaPartida(){
		for(Jogador jogador:this.jogadores){
			this.jogadoresNaPartidaEmCurso.add(jogador);
		}
	}

	/**
	 * Esse método pega comandos e executa.
	 * 
	 * @param comando
	 * @return
	 */
	public boolean executaComando(String comando) {

		switch (comando) {
		case JogoVinteEUm.AJUDA:
			System.out.println(JogoVinteEUm.COMANDOS);

			break;
		case JogoVinteEUm.CONFIGURAR:
			int numeroDeJogadoresHumanos = 0;
			int numeroDeJogadoresMaquina = 0;
			this.jogadores.clear();
			Scanner entrada = new Scanner(System.in);

			System.out.println("Resetamos os jogadores e o deck.  ");
			System.out.println("Quantos baralhos no deck?");
			int quantidadeDeBaralhos = entrada.nextInt();
			this.deck = new Deck(quantidadeDeBaralhos);
			this.deck.embaralhar();

			System.out.println("Quantos jogadores Humanos?");

			numeroDeJogadoresHumanos = entrada.nextInt();
			System.out.println("Quantos jogadores Máquina?");
			numeroDeJogadoresMaquina = entrada.nextInt();
			for (int i = 0; i < numeroDeJogadoresHumanos; i++) {
				System.out.println("Digite o nome do humano " + (i + 1));
				String nome = entrada.next();
				Jogador jogador = new Jogador(nome, true);
				this.jogadores.add(jogador);
			}
			for (int i = 0; i < numeroDeJogadoresMaquina; i++) {
				System.out.println("Digite o nome da Máquna " + (i + 1));
				String nome = entrada.next();
				Jogador jogador = new Jogador(nome, false);
				this.jogadores.add(jogador);

			}

			for (Jogador jogador : this.jogadores) {
				Carta carta = this.deck.retirarUmaCarta();
				Carta carta2 = this.deck.retirarUmaCarta();
				jogador.segurarCarta(carta);
				jogador.segurarCarta(carta2);
			}
			
			this.jogadoresEliminadosDaPartida.clear();
			this.partidaEmCurso = true;
			this.indexDoJogadorDaVez = 0;
			for(Jogador jogador: this.jogadores){
				this.jogadoresNaPartidaEmCurso.add(jogador);
			}

			break;
		case JogoVinteEUm.JOGAR:
			this.jogadoresEliminadosDaPartida.clear();
			this.jogadoresNaPartidaEmCurso.clear();
			
			int numeroDenovos = 0;
			if (this.jogadores.size() == 0) {
				numeroDenovos = 2;
			} else if (this.jogadores.size() == 1) {
				numeroDenovos = 1;
			} else if (this.jogadores.size() >= 2) {
				numeroDenovos = 0;
			}

			for (int i = 0; i < numeroDenovos; i++) {
				Jogador jogador = new Jogador("Player " + (i + 1), true);
				this.jogadores.add(jogador);
			}
			
			this.partidaEmCurso = true;
			this.indexDoJogadorDaVez = 0;
			this.todosRasgandoAsCartas();
			if(this.deck.getCartas().size() == 0){
				
				this.deck = new Deck(1);	
			}
			
			this.deck.embaralhar();
			
			for (Jogador jogador : this.jogadores) {
				Carta carta = this.deck.retirarUmaCarta();
				Carta carta2 = this.deck.retirarUmaCarta();
				jogador.segurarCarta(carta);
				jogador.segurarCarta(carta2);
			}
			for(Jogador jogadorr: this.jogadores){
				this.jogadoresNaPartidaEmCurso.add(jogadorr);
			}
			

			break;

		case JogoVinteEUm.COMPRAR:
			if(this.partidaEmCurso){
				Carta carta = this.deck.retirarUmaCarta();
				this.jogadoresNaPartidaEmCurso.get(this.indexDoJogadorDaVez).segurarCarta(carta);
				if(this.retornaPontuacao(this.jogadoresNaPartidaEmCurso.get(this.indexDoJogadorDaVez)) <= 21){
					
				}else{
					System.out.println(this.jogadoresNaPartidaEmCurso.get(this.indexDoJogadorDaVez).getNome()+ "Foi eliminado do jogo");
					this.jogadoresEliminadosDaPartida.add(this.jogadores.get(this.indexDoJogadorDaVez));
					this.jogadoresNaPartidaEmCurso.remove(this.indexDoJogadorDaVez);
					
				}	
			}
			

			this.mostrarJogadores();
			break;
		case JogoVinteEUm.RESET:
			this.partidaEmCurso = false;
			this.jogadores.clear();
			this.jogadoresNaPartidaEmCurso.clear();
			this.jogadoresEliminadosDaPartida.clear();
			
			break;
		case JogoVinteEUm.PARAR:
			if(this.partidaEmCurso){
				if (this.indexDoJogadorDaVez < (this.jogadores.size() - 1)) {
					this.indexDoJogadorDaVez++;
				} else {
					System.out.println("Acabou a partida! Deixa eu ver quem ganhou...");
					if(!this.defineVencedor()){
						System.out.println("Deu empate. Ninguém ganhou!");
						this.zerarPartidaSemZerarJogadores();
						
					}else
					{
						this.indexDoJogadorDaVez = 0;
					}
					
					
				}	
			}
			
			break;

		default:
			System.out.println("Comando não encontrado. ");
			break;
		}

		return true;
	}
	public boolean defineVencedor(){
		int indexDoVencedor = 0;
		boolean bandeira = false;
		
		
		//Temos que descbrir o index do campeao. Se ele existir nós modificaremos
		//então mudamos a bandeira para verdadeira.
		//e usaremos isso:
		//this.jogadoresNaPartidaEmCurso.clear();
		//this.jogadoresNaPartidaEmCurso.add(this.jogadores.get(indexDoVencedor));
		
		return bandeira;
	}
	

	
	
	public void mostrarJogadores() {
		System.out.println("-------------------------------------------------------------");
		System.out.println("Lista de Jogadores: ");
		for (Jogador jogador : this.jogadoresNaPartidaEmCurso) {
			System.out.println(jogador);
			for (Carta carta : jogador.getMao()) {
				System.out.print("" + carta + "; \n");
			}
			System.out.println("pontuação: "+this.retornaPontuacao(jogador));

		}
	}
	public void mostrarJogadoresDoJogo() {
		System.out.println("-------------------------------------------------------------");
		System.out.println("Lista de Jogadores: ");
		for (Jogador jogador : this.jogadores) {
			System.out.println(jogador);
			for (Carta carta : jogador.getMao()) {
				System.out.print("" + carta + "; \n");
			}
			System.out.println("pontuação: "+this.retornaPontuacao(jogador));

		}
	}

	public int retornaPontuacao(Jogador jogador) {
		int pontuacao = 0;
		int quantidadeDeAs = 0;
		for (Carta carta : jogador.getMao()) {
			switch (carta.getValor()) {
			case 1:
				pontuacao += 1;
				quantidadeDeAs++;
				break;
			case 2: 
				pontuacao += 2;
				break;
			case 3: 
				pontuacao += 3;
				break;
			case 4: 
				pontuacao += 4;
				break;
			case 5: 
				pontuacao += 5;
				break;
			case 6: 
				pontuacao += 6;
				break;
			case 7: 
				pontuacao += 7;
				break;
			case 8: 
				pontuacao += 8;
				break;
			case 9: 
				pontuacao += 9;
				break;
			case 10: 
				pontuacao += 10;
				break;
			case 11: 
				pontuacao += 10;
				break;
			case 12: 
				pontuacao += 10;
				break;
			case 13: 
				pontuacao += 10;
				break;
			default:
				break;
			}
			if(pontuacao + (quantidadeDeAs*10) <= 21){
				pontuacao = pontuacao + (quantidadeDeAs*10);
				
			}
			
		}
		return pontuacao;
	}
	public void todosDevolvendoAsCartas(){
		for(Jogador jogador: this.jogadores){
			this.deck.receberCartas(jogador.devolverCartas());
			
		}
	
	}
	public void todosRasgandoAsCartas(){
		for(Jogador jogador: this.jogadores){
			jogador.devolverCartas();
			
		}
	
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		
		this.labelDaCarta.setText(this.labelDaCarta.getText()+" \n"+this.deck.retirarUmaCarta().toString());
		
		
	}
	class EventoElaborado extends AbstractAction{
		/**
		 * 
		 */
		private static final long serialVersionUID = 1L;
		private int codigoDoEvento;

		public EventoElaborado(int nomeDoEvento){
			this.codigoDoEvento = nomeDoEvento;
		}
		
		
		@Override
		public void actionPerformed(ActionEvent e) {

			switch (this.codigoDoEvento) {
			case EMBARALHAR:
				deck.embaralhar();
				break;
			case PUXAR:
				Carta c = deck.retirarUmaCarta();
				add(new JLabel(c.toString()));
				break;

			default:
				break;
			}
			if(this.codigoDoEvento == EMBARALHAR){
				
			}
			
		}
		
		
		
		
	}
	


}
