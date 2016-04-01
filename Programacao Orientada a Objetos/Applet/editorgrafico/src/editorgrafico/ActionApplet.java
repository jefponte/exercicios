package editorgrafico;

import java.awt.Color;
import java.awt.Desktop.Action;
import java.awt.Panel;
import java.awt.event.ActionEvent;

import javax.swing.AbstractAction;
import javax.swing.ActionMap;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.InputMap;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JComponent;
import javax.swing.JPanel;
import javax.swing.KeyStroke;

public class ActionApplet extends JApplet{

	private JPanel buttonPanel;
	@Override
	public void init() {
		super.init();
		buttonPanel = new JPanel();
		CollorAction yellowAction = new CollorAction("Yellow", new ImageIcon("images/yellow.jpg"), Color.YELLOW);
		CollorAction blueAction = new CollorAction("Blue", new ImageIcon("images/blue.jpg"), Color.BLUE);
		CollorAction redAction = new CollorAction("Red", new ImageIcon("images/red.jpg"), Color.RED);
		
		buttonPanel.add(new JButton(yellowAction));
		buttonPanel.add(new JButton(blueAction));
		buttonPanel.add(new JButton(redAction));
		
		add(buttonPanel);
		
		
		
		
	}
	class CollorAction extends AbstractAction{

		
		public CollorAction(String nome, Icon icon, Color c){
			putValue(NAME, nome);
			putValue(SMALL_ICON, icon);
			putValue(SHORT_DESCRIPTION, "set Painel collor to"+nome.toLowerCase());
			putValue("color", c);
			
		}
		@Override
		public void actionPerformed(ActionEvent event) {
			Color c = (Color)getValue("color");
			buttonPanel.setBackground(c);
			
		}
		
	}
}
