package br.com.jefponte.especificas;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.AbstractAction;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
/*
 * Pra mudar pra aplet basta mudar aqui para JApplet 
 * e deletar as chamadas de metodo improprias neste construtor
 */
public class TelaDeLicitante extends JFrame{
	private JPanel painel;
	private Licitante l;
	private Mediador m;
	private JLabel informacao;
	private JButton darLanceNovo;
	private JTextField campoDetexto;
	public TelaDeLicitante(JPanel painel, Licitante l, Mediador m){
		this.l = l;
		this.m = m;
		this.campoDetexto = new JTextField(10);
		
		this.setTitle("Tela do Licitante"+l);
		this.painel = painel;
		this.painel.add(this.campoDetexto);
		this.darLanceNovo = new JButton("Dar Novo Lance");
		this.painel.add(this.darLanceNovo);
		this.darLanceNovo.addActionListener(new NovoLance(this.campoDetexto));
		this.painel.setBackground(Color.YELLOW);
		this.add(painel);
		this.informacao = new JLabel();
		this.informacao.setText("Informações Sobre o Leilão");
		this.painel.add(this.informacao);
		this.informacao.setText(this.m.toString());
		this.setVisible(true);
		this.setSize(800, 800);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	public class NovoLance implements ActionListener{
		private JTextField campo;
		public NovoLance(JTextField campoDetexto){
			this.campo = campoDetexto;
		}
		@Override
		public void actionPerformed(ActionEvent e) {
			
			String novoLance = this.campo.getText();
			double novo = Double.parseDouble(novoLance);
			l.darLance(novo);
			//System.out.println(""+novo);
			//System.out.println(novoLance);
			
		}
		
		
	}

}
