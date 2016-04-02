package jogodatartaruga;

import java.util.Scanner;

/**
 * consiste em uma classe para manipular tartaruga e plataforma de forma a 
 * gerar um jogo. Permitir a interacao com o usuario que vai digitar e 
 * vai mostrar o resultado. 
 * 
 * @author jefferson
 *
 */
public class Jogador {
	private Tartaruga donatelo;
	private Plataforma arena;
	public Jogador(){
		System.out.println("-------Joguinho da tartaruga!--------------");
		this.arena= new Plataforma(30, 30);
		this.arena.mostraPlataforma();
		System.out.println("-------por tartaruguinha na plataforma!--------------");
		this.donatelo = new Tartaruga();
		this.arena.setTartarugas(donatelo);
		this.arena.mostraPlataforma();
		
	}
/*	
	public void iniciaJogo(){
		System.out.println("-------Joguinho da tartaruga!--------------");
		Plataforma arena = new Plataforma(30, 30);
		arena.mostraPlataforma();
		System.out.println("----------Pondo a tartaruga na plataforma-----------");
		Tartaruga donatelo = new Tartaruga();
		arena.setTartarugas(donatelo);
		arena.mostraPlataforma();
		System.out.println("----------Instrucoes: -----------");
		System.out.println("----------1- Caneta Para Cima -----------");
		System.out.println("----------2- Caneta Para Baixo-----------");
		System.out.println("----------3- Tartaruga para Direita -----------");
		System.out.println("----------4- Tartaruga para Esquerda-----------");
		System.out.println("----------0- Tartaruga para Baixo-----------");
		System.out.println("----------6- Mostra Arena-----------");
		System.out.println("----------10- Tartaruga para Cima -----------");
		System.out.println("----------5- Move tartaruga n posicoes-----------");
		System.out.println("----------9- Sair do Jogo-----------");
		
		System.out.println("----------A cada comando realizaremos a operação e mostraremos a plataforma--------");
		
		
		
		int comando;
		Scanner entrada = new Scanner(System.in);
		do{
		System.out.println("Digite o comando: ");
		comando = entrada.nextInt();
		switch (comando) {
		case 1:
			//mova caneta para cima
			donatelo.mexeNaCaneta(0);
			System.out.println("Caneta para Cima.");
			arena.mostraPlataforma();
			break;
		case 2: 
			//mova caneta para baixo
			donatelo.mexeNaCaneta(1);
			System.out.println("Caneta para Baixo.");
			arena.mostraPlataforma();
			break;
		case 3:
			System.out.println("Tartaruga Olhando para a direita:");
			donatelo.mudaDirecao(3);
			arena.mostraPlataforma();
			
			break;
		case 4: 
			System.out.println("Tartaruga Olhando para a esquerda:");
			donatelo.mudaDirecao(4);
			arena.mostraPlataforma();
			break;
		case 0:
			System.out.println("Tartaruga Olhando para a baixo:");
			donatelo.mudaDirecao(0);
			arena.mostraPlataforma();
			break;
		case 10:
			System.out.println("Tartaruga Olhando para a cima:");
			donatelo.mudaDirecao(5);
			arena.mostraPlataforma();			
			break;
		case 5:
			System.out.println("Mover tartaruga Quantas Posições?:");
			Scanner entrada2 = new Scanner(System.in);
			int posicoes = entrada2.nextInt();
			arena.moverTartaruga(posicoes);
			arena.mostraPlataforma();
			
			break;		
			
		case 6: 
			System.out.println("Mostrar Plataforma");
			arena.mostraPlataforma();
			break;

		case 9: 
			System.out.println("Saindo do jogo");
			break;
		default:
			System.out.println("Este não é um comando válido:");
			
		}
		
		
		}while(comando != 9);
		System.out.println("Fim de Jogo.");
		
		
		
		
		
		
		
	}
	*/
	
	public void iniciaJogo(int[] arrayDeComandos){
		
		System.out.println("----------Instrucoes: -----------");
		System.out.println("----------1- Caneta Para Cima -----------");
		System.out.println("----------2- Caneta Para Baixo-----------");
		System.out.println("----------3- Tartaruga para Direita -----------");
		System.out.println("----------4- Tartaruga para Esquerda-----------");
		System.out.println("----------5 - Move tartaruga n posicoes-----------");
		System.out.println("----------6 - Mostra Arena-----------");
		System.out.println("----------9 - Sair do Jogo-----------");
		System.out.println("----------A cada comando realizaremos a operação e mostraremos a plataforma--------");
	
		
		this.executaComando(arrayDeComandos);
			
			
		
		
		
	}
	public void executaComando(int[] arrayDeComandos){
		for(int i = 0; i < arrayDeComandos.length; i ++)
		{
			int comando = arrayDeComandos[i];
			switch (comando) {
			case 1:
				//mova caneta para cima
				this.donatelo.mexeNaCaneta(0);
				System.out.println("Caneta para Cima.");
				break;
			case 2: 
				//mova caneta para baixo
				this.donatelo.mexeNaCaneta(1);
				System.out.println("Caneta para Baixo.");
				break;
			case 3:
				
				//Tuurn Right
				if(this.donatelo.getDirecaoDaTartaruga() == 5){
					//ta pra cima
					//fica pra direita
					this.donatelo.mudaDirecao(3);
					
				}else if (this.donatelo.getDirecaoDaTartaruga() == 4) {
					//ta pra esquerda. 
					//vira pra cima
					this.donatelo.mudaDirecao(5);
					
				}else if (this.donatelo.getDirecaoDaTartaruga() == 0) {
					//ta pra baixo
					//vira pra esquerda
					this.donatelo.mudaDirecao(4);
					
					
				}else if (this.donatelo.getDirecaoDaTartaruga() == 3) {
					//ta pra direita
					//olha para baixo
					this.donatelo.mudaDirecao(0);
				}
				
				break;
			case 4: 
				//Tuurn Left
				if(this.donatelo.getDirecaoDaTartaruga() == 5){
					//ta pra cima
					//fica pra esquerda
					this.donatelo.mudaDirecao(4);
					
				}else if (this.donatelo.getDirecaoDaTartaruga() == 4) {
					//ta pra esquerda. 
					//vira pra baixo
					this.donatelo.mudaDirecao(0);
					
				}else if (this.donatelo.getDirecaoDaTartaruga() == 0) {
					//ta pra baixo
					//vira pra direita
					this.donatelo.mudaDirecao(3);
					
					
				}else if (this.donatelo.getDirecaoDaTartaruga() == 3) {
					//ta pra direita
					//olha para cima
					this.donatelo.mudaDirecao(5);
				}
				break;
			case 5:
				System.out.println("Mover tartaruga Quantas Posições?:");
				i++;
				System.out.println(arrayDeComandos[i]+" Posições!");
				this.arena.moverTartaruga(arrayDeComandos[i]);
				break;
			case 6:
				System.out.println("Mostrar Arena:");
				this.arena.mostraPlataforma();
				break;

			case 9: 
				System.out.println("Saindo do jogo");
				break;
			default:
				System.out.println("Este não é um comando válido:");
				
			}
	
		} 
				
	}

}
