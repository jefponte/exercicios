package interface2;

import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JPanel;

public class Painel extends JPanel{
	
	@Override
	protected void paintComponent(Graphics g) {
		super.paintComponent(g);
		
		int width = getWidth();
		int height = getHeight();
		
		g.setColor(Color.RED);
		g.drawRect(0, 0, 100, 100);
				
		
	}

}
