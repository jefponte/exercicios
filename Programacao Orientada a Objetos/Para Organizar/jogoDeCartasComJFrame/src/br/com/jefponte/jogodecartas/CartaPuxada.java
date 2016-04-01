package br.com.jefponte.jogodecartas;

import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JPanel;

public class CartaPuxada extends JPanel{
	Carta c;
	public CartaPuxada(Carta c){
		this.setSize(20, 20);
		this.c = c;
	}
	@Override
	public void paintComponents(Graphics g) {
		g.setColor(Color.BLACK);
		g.drawString("Teste", 5, 5);
		
		
	}
	
	
	
}
