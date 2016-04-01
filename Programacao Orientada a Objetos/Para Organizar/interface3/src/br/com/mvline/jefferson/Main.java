package br.com.mvline.jefferson;

import java.awt.BorderLayout;
import java.awt.FlowLayout;

import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;


public class Main {

	
	public static void main(String[] args) {
		
		
		
		
		JFrame jFrame = new JFrame("Meu Titulo");
		jFrame.setLayout(new BorderLayout());
		
		
		jFrame.setVisible(true);
		jFrame.setSize(200, 200);
		jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
		
		JLabel jLabel = new JLabel("Nome da pessoa: ");
		jFrame.add(BorderLayout.CENTER, jLabel);
		
		
		
		JLabel jLabel2 = new JLabel("Idade da Pesssoa");
		jFrame.add(BorderLayout.NORTH, jLabel2);
		System.out.println(BorderLayout.CENTER);
		
	}
}
