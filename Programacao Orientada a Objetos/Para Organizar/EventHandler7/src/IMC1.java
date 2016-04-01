import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.LayoutManager;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class IMC1 extends JPanel {
	private JTextField jtf1;
	private JTextField jtf2;
	private JTextField jtf3;
	private JButton jbtn;
	
	public IMC1() {
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
		
		MyActionListener handler = new MyActionListener(jtf1, jtf2, jtf3);
		
		jbtn = new JButton("          OK          ");
		jbtn.addActionListener(handler);
		add(jbtn);
	}


}
