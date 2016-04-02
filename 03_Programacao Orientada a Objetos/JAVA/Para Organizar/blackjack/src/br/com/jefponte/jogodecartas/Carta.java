package br.com.jefponte.jogodecartas;

import javax.swing.Icon;
import javax.swing.ImageIcon;

/**
 * Esta classe serve para criar cartas, elas tem Naipe e valor. Tudo muito óbvio
 * e parecido com o mundo real
 */

public class Carta {
	private int naipe;
	/**
	 * 1 - 13, sendo:
	 * 1 = As
	 * 11 = j
	 * 12 = Q
	 * 13 = K
	 * 
	 */
	private int valor;
	public static final int ESPADAS = 0;
	public static final int PAUS = 1;
	public static final int COPAS = 2;
	public static final int OUROS = 3;
	

	public Carta(int naipe, int valor) {
		if (naipe == Carta.ESPADAS || naipe == Carta.PAUS
				|| naipe == Carta.COPAS || naipe == Carta.OUROS) {
			this.naipe = naipe;

		} 
		else 
		{
			this.naipe = Carta.ESPADAS;
		}
		
		if(valor < 14 && valor > 0){
			this.valor = valor;
		}
		


	}
	public int getNaipe(){
		return this.naipe;
	}
	public int getValor(){
		return this.valor;
	}
	
	@Override
	public String toString() {
		//
		String naipe;
		switch (this.naipe) {
		
		case Carta.ESPADAS:
			naipe = "♤ Espadas"; 
			break;
		case Carta.COPAS:
			naipe = "♥ copas";
			break;
		case Carta.OUROS: 
			naipe = "♢ ouros";
			break;
		case Carta.PAUS: 
			naipe = "♧ paus  ";
			break;
		default:
			naipe = "Sei lá!";
			break;
		}
		String valor = "";
		if(this.valor > 1 && this.valor < 11){
			valor = Integer.toString(this.valor);
		}else if (this.valor == 1) {
			valor = "A";
			
		}else if (this.valor == 11) {
			valor= "J";
		}else if (this.valor == 12) {
			valor = "Q"; 
		}else if (this.valor == 13) {
			valor = "K";
		}


		String carta = valor + " "+ naipe;
		return carta;
	}
	
	
	public ImageIcon getIcon(){
		return new  ImageIcon(getClass().getResource("/images/cards/sequencia/"+this.valor+""+this.naipe+".png"));
		
	}

}
