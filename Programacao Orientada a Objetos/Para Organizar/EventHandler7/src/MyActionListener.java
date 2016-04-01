import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JTextField;


public class MyActionListener implements ActionListener {
	private JTextField jtf1;
	private JTextField jtf2;
	private JTextField jtf3;
	
	public MyActionListener(JTextField jtf1, JTextField jtf2, JTextField jtf3) {
		this.jtf1 = jtf1;
		this.jtf2 = jtf2;
		this.jtf3 = jtf3;
	}
	
	public void actionPerformed(ActionEvent arg0) {
		
		double peso = Double.parseDouble(jtf1.getText());
		double altura = Double.parseDouble(jtf2.getText());
		double imc = peso / (altura * altura);
		jtf3.setText(String.format("%.2f", imc));
	}

}
