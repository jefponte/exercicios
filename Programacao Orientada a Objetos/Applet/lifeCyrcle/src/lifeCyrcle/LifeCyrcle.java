package lifeCyrcle;

import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JApplet;
import javax.swing.JPanel;

public class LifeCyrcle extends JApplet{
	int count= 1;
	private JPanel painel;
	
	public void init(){
		this.painel = new JPanel();
		painel.setBackground(Color.BLACK);
		this.add(this.painel);
		System.out.println("Initiate:"+count++);
		
	}
	public void start(){
		this.painel.setBackground(Color.BLUE);
		System.out.println("Starting: "+count++);
		
	}
	public void paint(Graphics g){
		System.out.println("Paint: "+count++);
		
	}

}
