package br.com.mvline.jefferson.jogodecartas;

import java.util.ArrayList;

public class Baralho {
	
	private ArrayList<Carta> cartas;

	/**
	 * metodo construtor vai criar as cartas de um baralho. 
	 */
	public Baralho() {
		this.cartas = new ArrayList<Carta>();
		
		//primeiro for percorre cada naipe. 		
		for(int i = 0; i < 4; i++){
			//O naip varia de 0 a 3, assim com o i
			//segundo for percorre cada valor de carta em cada naipe
			for(int j = 1; j < 14; j++){
				//instanciaremos o objeto carta aqui dentro e daremos seu valor de acordo com I e J
					this.cartas.add(new Carta(i, j));
			}//fecha segundo for
			
		}
		
	}
	/**
	 * Retorna as cartas do baralho. 
	 * @return
	 * 
	 */
	public ArrayList<Carta> getCartas(){
		return this.cartas;
	}

}
