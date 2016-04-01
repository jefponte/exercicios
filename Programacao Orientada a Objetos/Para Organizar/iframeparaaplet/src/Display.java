

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.FontFormatException;
import java.io.IOException;
import java.net.URL;

import javax.swing.Icon;
import javax.swing.JLabel;


public class Display extends JLabel {

	public Display(String arg0) {
		super(arg0);
		setBackground(Color.BLACK);
		setOpaque(true);
		setForeground(Color.GREEN);
		setPreferredSize(new Dimension(200, 50));
		setHorizontalAlignment(JLabel.CENTER);
		
		try {
			URL url = getClass().getResource("digital-7.ttf");
			Font font = Font.createFont(Font.TRUETYPE_FONT, url.openStream());
			font = font.deriveFont(Font.PLAIN, 50.0f); 
			setFont(font);
		} catch (IOException e) {
			e.printStackTrace();
		} catch (FontFormatException e) {
			e.printStackTrace();
		}
	}

}
