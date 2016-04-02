package interfacegrafica;

import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class Principal {

	public static void main(String[] args) {
		DrawPanel painel = new DrawPanel();
		JFrame aplication = new JFrame();
		aplication.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		aplication.add(painel);
		aplication.setSize(250, 250);
		aplication.setVisible(true);

	}

}
