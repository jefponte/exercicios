package jframeteste;

import java.awt.EventQueue;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Main extends JFrame {
	public static void main(String[] args) {
		Main m = new Main();
		PainelPrincipal painel = new PainelPrincipal();
		m.add(painel);
		
		m.add(painel);
		m.setTitle("Minha Janela");
		m.setSize(800, 300);
		m.setVisible(true);

	}

}
