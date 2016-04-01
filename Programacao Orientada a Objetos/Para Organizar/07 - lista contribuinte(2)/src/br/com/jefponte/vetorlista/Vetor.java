package br.com.jefponte.vetorlista;

public class Vetor {

	private double x,y;
	public Vetor(double x, double y){
		this.x = x; 
		this.y = y;
	}
	private Vetor(){
		
	}
	
	@Override
	public String toString() {
		
	    String valorDeX = String.format("%.2f", this.x);
	    String valorDeY = String.format("%.2f", this.y);
		return "("+valorDeX+", "+valorDeY+")";
	}
	
	
	@Override
	public Object clone() throws CloneNotSupportedException {
		Vetor vet = new Vetor(this.x, this.y);
		return vet;
	}
	
	
}
