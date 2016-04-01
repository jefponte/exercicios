package br.com.jefponte.janela;

import javax.swing.JFrame;

import br.com.jefponte.jogodecartas.JogoVinteEUm;


public class Principal extends JFrame{
	JogoVinteEUm jogo;
	
	
	public static void main(String[] args) {

		Principal pr = new Principal();
		pr.setTitle("Jogo de Cartas");
		pr.jogo = new JogoVinteEUm();
		pr.add(pr.jogo);
		pr.setSize(500, 500);
		pr.setDefaultCloseOperation(EXIT_ON_CLOSE);
		pr.setVisible(true);
		
		

	}

}
