package interface2;

import javax.swing.JFrame;

public class MyApp extends JFrame {
	
	public static void main(String[] args) {
		MyApp aplicacao = new MyApp();
		
		
		aplicacao.setTitle("Minha aplicação");
		aplicacao.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		aplicacao.setSize(200, 200);
		Painel painel = new Painel();
		aplicacao.add(painel);
		
		
		aplicacao.setVisible(true);
		
		
		
	}

}
