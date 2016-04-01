

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

import javax.swing.AbstractAction;
import javax.swing.Icon;
import javax.swing.JButton;
import javax.swing.JPanel;

public class PainelDeControle extends JPanel {
	private ArrayList<JButton> botoes;
	private ArrayList<DisplayAction>acoes;
	private JButton BotaoOnOF;
	private Display display;
	
	public JButton getBotaoOnOF(){
		return this.BotaoOnOF;
	}
	
	public PainelDeControle(){
		this.BotaoOnOF = new JButton("On/OFF");
		this.add(this.BotaoOnOF);
		this.acoes = new ArrayList<DisplayAction>();
		this.display = new Display("00:00:00");
		this.add(this.display);
		botoes = new ArrayList<JButton>();
		
		for(int i = 0; i< 10; i++){
			acoes.add(new DisplayAction(""+i));
			botoes.add(new JButton(""+i));
			botoes.get(i).addActionListener(acoes.get(i));
			this.add(botoes.get(i));
			
		}
		
	}
	class DisplayAction extends AbstractAction{
		String valor;
		
		public DisplayAction(String valorDigitado){
			this.valor = valorDigitado;
		}
		@Override
		public void actionPerformed(ActionEvent event) {
			
			display.setText(display.getText()+this.valor);
			
			
		}
		
	}

	

}
