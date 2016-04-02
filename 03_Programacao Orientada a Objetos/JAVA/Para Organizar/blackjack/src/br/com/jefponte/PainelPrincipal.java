package br.com.jefponte;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Graphics;
import java.awt.GridLayout;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;
import javax.swing.AbstractAction;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;

import br.com.jefponte.jogodecartas.Baralho;
import br.com.jefponte.jogodecartas.Carta;
import br.com.jefponte.jogodecartas.Deck;

public class PainelPrincipal extends JPanel{
	
	private JButton imagemDeck;
	private JLabel cartaDaMao;
	private Image image;
	private Deck deck;
	private Carta carta;
	
	
	public PainelPrincipal(){
	
		
		this.deck = new Deck(1);
		//this.deck.embaralhar();
		
		try{
			image = ImageIO.read(getClass().getResource("/images/green.jpg"));
			
		}catch(IOException e){
			e.printStackTrace();
			
		}
		
		
		this.cartaDaMao = new JLabel("Nenhuma carta na mão");
		this.add(this.cartaDaMao);
		
		
		this.imagemDeck = new JButton();
		this.imagemDeck.setLayout(new GridLayout());
		
		this.imagemDeck.setIcon(new  ImageIcon(getClass().getResource("/images/cards/b1fv.png")));
		this.add(this.imagemDeck);
		this.imagemDeck.addActionListener(new EventoPegaDoBaralho());
		
		this.setBackground(Color.BLACK);
		
		
		
		
		
	}
	public void paintComponent(Graphics g){
		super.paintComponent(g);
		g.drawImage(image, 0, 0, null);
		
	}
	class EventoPegaDoBaralho extends AbstractAction{

		public EventoPegaDoBaralho(){
			
		}
		
		
		@Override
		public void actionPerformed(ActionEvent e) {
			cartaDaMao.setText("");
			Carta c = deck.retirarUmaCarta();
			if(c != null){
				cartaDaMao.setIcon(c.getIcon());
			}
			
			
			
		}
		
		
	}
	
	
	

}
