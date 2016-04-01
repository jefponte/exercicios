package mudaFundo;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class ButtonFrame extends JApplet{

	public static final int DEFAULT_WIDTH = 300;
	public static final int DEFAULT_HEIGHT = 200;
	private JPanel buttonPanel;

	
	
	public void init(){
		
		
		//criar botões
		
		JButton yellowButton = new JButton("Yellow");
		JButton blueButton = new JButton("Blue");
		JButton redButton = new JButton("Red");
		
		this.buttonPanel = new JPanel();
		buttonPanel.add(yellowButton);
		buttonPanel.add(blueButton);
		buttonPanel.add(redButton);
		
		//adiciona o painel ao frame
		this.add(this.buttonPanel);
		
		//cria acoes de botao
		ColorAction yellowAction = new ColorAction(Color.YELLOW);
		ColorAction blueAction = new ColorAction(Color.BLUE);
		ColorAction redAction = new ColorAction(Color.RED);
		
		yellowButton.addActionListener(yellowAction);
		blueButton.addActionListener(blueAction);
		redButton.addActionListener(redAction);
		
		
	}
	public class ColorAction implements ActionListener{

		private Color backgroundColor;
		
		public ColorAction(Color c){
			this.backgroundColor = c;
		}
		
		@Override
		public void actionPerformed(ActionEvent event) {
			buttonPanel.setBackground(this.backgroundColor);
			
			
		}
		
		
		
	}
	

}
