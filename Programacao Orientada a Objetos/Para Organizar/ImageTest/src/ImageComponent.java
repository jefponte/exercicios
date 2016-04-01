import java.awt.Graphics;
import java.awt.Image;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;
import javax.swing.JComponent;


public class ImageComponent extends JComponent{

	private Image image;
	
	public ImageComponent(){
		
		try{
			image = ImageIO.read(new File("/bolinha.gif"));
			
		}catch(IOException e){
			e.printStackTrace();
		}
		
	}
	public void paintComponent(Graphics g){
		if(image == null) return;
		int imageWidth = image.getWidth(this);
		int imageHeight = image.getHeight(this);
		g.drawImage(image, 0, 0, null);
		
	
	}
}
