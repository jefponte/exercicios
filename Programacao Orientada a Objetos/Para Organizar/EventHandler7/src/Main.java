import java.awt.FlowLayout;

import javax.swing.JFrame;


public class Main {

	public static void main(String[] args) {
		JFrame jFrame = new JFrame("Event Handler");
		jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jFrame.setSize(200,200);
		jFrame.setLayout(new FlowLayout());
		
		// jFrame.add(new IMC1()); or 
		// jFrame.add(new IMC2()); or
		// jFrame.add(new IMC3()); or
		jFrame.add(new IMC4());
		
		jFrame.setVisible(true);
	}

}
