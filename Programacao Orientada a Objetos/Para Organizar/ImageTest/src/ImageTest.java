import java.awt.EventQueue;

import javax.swing.JFrame;


public class ImageTest {
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			
			@Override
			public void run() {
				ImageFrame frame = new ImageFrame();
				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				frame.setVisible(true);
				
			}
		});
	}

}
