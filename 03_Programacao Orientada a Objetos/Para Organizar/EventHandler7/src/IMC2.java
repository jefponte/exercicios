import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.LayoutManager;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class IMC2 extends JPanel implements ActionListener {
	private JTextField jtf1;
	private JTextField jtf2;
	private JTextField jtf3;
	private JButton jbtn;
	
	public IMC2() {
		setLayout(new FlowLayout());
		setPreferredSize(new Dimension(120, 110));
		
		JLabel jlbl1 = new JLabel("   peso: ");
		add(jlbl1);
		
		jtf1 = new JTextField(5);
		add(jtf1);
		
		JLabel jlbl2 = new JLabel("altura: ");
		add(jlbl2);
		
		jtf2 = new JTextField(5);
		add(jtf2);
		
		JLabel jlbl3 = new JLabel("  I.M.C.: ");
		add(jlbl3);
		
		jtf3 = new JTextField(5);
		jtf3.setEditable(false);
		add(jtf3);
				
		jbtn = new JButton("          OK          ");
		jbtn.addActionListener(this);
		add(jbtn);
	}
	
	public void actionPerformed(ActionEvent arg0) {
		
		double peso = Double.parseDouble(jtf1.getText());
		double altura = Double.parseDouble(jtf2.getText());
		double imc = peso / (altura * altura);
		jtf3.setText(String.format("%.2f", imc));
	}

}
