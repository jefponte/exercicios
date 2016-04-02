package br.com.jefponte;

import java.awt.EventQueue;

import javax.swing.JFrame;

public class Principal 
{
	private MinhaFrame frame;
	private PainelPrincipal painelPrincipal;
	
	public Principal()
	{
		
		this.frame = new MinhaFrame();
		this.frame.setTitle("Jogo de Cartas");
		this.painelPrincipal = new PainelPrincipal();
		this.frame.add(this.painelPrincipal);
		
		
		
		
	}
	public MinhaFrame getFrame(){
		return this.frame;
	}

	public static void main(String[] args) {
	
		
		
		EventQueue.invokeLater(new Runnable() {
			
		
			@Override
			public void run() {
				Principal p = new Principal();
				p.getFrame().setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				p.getFrame().setVisible(true);
			}
		});
		
	}
}
