package br.com.jefponte.especificas;

public class Licitante implements Observer{

	private String nome;
	private boolean placaLevantada;
	private double valorDoLanceNaPlaca;
	private Mediador mediador;
	private Observer autorDoUltimoLance;
	private double ultimoLanceDado;
	
	public Licitante(String nome, Subject mediador){
		this.mediador = (Mediador)mediador;
		this.valorDoLanceNaPlaca = 0.0;
		placaLevantada = false;
		this.nome = nome;
		
	}
	
	public double getValorDoLanceNaPlaca(){
		return this.valorDoLanceNaPlaca;
	}
	
	@Override
	public void update(double ultimoLanceDado, Observer autorDoLance) {
		this.ultimoLanceDado = ultimoLanceDado;
		this.autorDoUltimoLance = autorDoLance;
		System.out.println("Tela do licitante "+this.nome+" "+this.mediador);
	}
	
	public void darLance(double novoLance){
		if(this.autorDoUltimoLance != this){
			//Não vamos ser otários e cubrir o próprio lance. 
			this.placaLevantada = true;
			this.valorDoLanceNaPlaca = novoLance;
			this.mediador.atualizaLance(this);
		}
		
	}
	public void baixaPlaca(){
		this.placaLevantada = false;
	}
	
	
	@Override
	public String toString() {
		String placa = "";
		if(this.placaLevantada){
			placa = " placa Levantada com: "+this.valorDoLanceNaPlaca;
		}else{
			placa = " placa abaixada";
		}
		String retorno = this.nome+placa; 
		return retorno;
	}
	

}
