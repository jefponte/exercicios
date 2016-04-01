package explicacao;

public class Ponto {
	private double x;
	private double y;
	
	public void setX(int valor){
		this.x = valor;
		
	}
	public double getX(){
		return this.x;
	}
	public void setY(int valor){
		this.y = valor;
	}
	public double getY(){
		return this.y;
		
	}
	public void mostraPonto(){
		System.out.println("("+this.x+", "+ this.y+")");
	}
	
	

}
