package br.com.mvline.jefferson.jogodecartas;

import java.util.ArrayList;

public class Jogador {
	private ArrayList<Carta> mao;
	private String nome;
	private int numeroDeVitoriasAcumuladas;
	private boolean humano;

	
	
	
	public Jogador(String nome, boolean humano){
		mao = new ArrayList<Carta>();
		this.humano = humano;
		this.nome = nome;
		
	}
	public String getNome(){
		return this.nome;
	}
	public boolean getHumano(){
		return this.humano;
	}
	public int getNumeroDeVitoriasAcumuladas(){
		return this.numeroDeVitoriasAcumuladas;
	}
	/**
	 * Com este metodo o jogador adiciona uma carta à sua mão. 
	 * @param carta
	 */
	public void segurarCarta(Carta carta){
		this.mao.add(carta);
	}
	@Override
	public String toString() {
	
		
		String jogador = "---------- "+ this.nome+ "--------------";
		if (this.getHumano()) {
			jogador = jogador + "\n Humano";
			
		} else {
			jogador = jogador + "\n Máquina";
			
		}
		jogador = jogador + "\n Número de vitórias: "+ this.numeroDeVitoriasAcumuladas;
		
		return jogador;
	}
	
	public ArrayList<Carta> getMao(){
		return this.mao;
	}

	public void incrementaNumeroDeVitorias(){
		this.numeroDeVitoriasAcumuladas++;
	}
	

	public ArrayList<Carta> devolverCartas(){
		ArrayList<Carta> cartasDevolvidas = new ArrayList<Carta>();
		for(Carta carta: this.mao){
			cartasDevolvidas.add(carta);	
		}
		this.mao.clear();
		return cartasDevolvidas;
		
	}

}
