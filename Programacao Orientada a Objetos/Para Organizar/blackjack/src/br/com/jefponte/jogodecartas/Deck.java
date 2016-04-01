package br.com.jefponte.jogodecartas;

import java.util.ArrayList;
import java.util.Collections;

/**
 * É o local onde juntamos as cartas, embaralhamos e deixamos sobre a mesa para
 * serem retiradas.
 */
public class Deck 
{
	private ArrayList<Carta> cartas;

	public Deck(int numeroDeBaralhos){
		this.cartas = new ArrayList<Carta>();
		if(numeroDeBaralhos > 0){
			for(int i = 0; i < numeroDeBaralhos; i++){
				Baralho baralho = new Baralho();
				for(Carta carta: baralho.getCartas()){
					this.cartas.add(carta);
					
				}
				
								
			}	
		}else
		{
			Baralho baralho = new Baralho();
			this.cartas = baralho.getCartas();
		}
		
		
	}

	public void embaralhar() {
		Collections.shuffle(this.cartas);
		
	}
	/**
	 * Retorna a carta de cima e retira do montante. 
	 */
	
	public Carta retirarUmaCarta(){
		int numeroTotalDeCartas = this.cartas.size();
		if(numeroTotalDeCartas > 0){
			Carta cartaRetirada = this.cartas.get(numeroTotalDeCartas - 1);
			this.cartas.remove(numeroTotalDeCartas - 1);
			return cartaRetirada;
		}
		else
		{
			return null;
		}
 
	}
	
	public void mostrarDeck(){
		for(Carta carta: this.cartas){
			System.out.println("Carta: "+ carta);
		}
	}
	public ArrayList<Carta> getCartas(){
		return this.cartas;
	}
	public void receberCartas(ArrayList<Carta> cartas){
		for(Carta carta: cartas){
			this.cartas.add(carta);
		}
	}
	
}