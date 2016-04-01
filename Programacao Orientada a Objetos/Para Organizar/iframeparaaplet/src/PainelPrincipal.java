

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JPanel;


/**
 * Ja vem com todos os componentes necessarios e acoes. 
 * 
 * @author jefferson
 *
 */
public class PainelPrincipal extends JPanel implements ActionListener{
	PainelDeControle painelControl;
	
	public PainelPrincipal(){
		this.setBackground(Color.BLACK);
		painelControl = new PainelDeControle();
		this.painelControl.getBotaoOnOF().addActionListener(this);
		this.add(painelControl);
		
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		if(this.getBackground() == Color.YELLOW){
			this.setBackground(Color.BLACK);
		}else{
			this.setBackground(Color.YELLOW);
		}
		
		
		
	}

}
