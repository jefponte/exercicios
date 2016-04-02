package br.com.jefponte.especificas;
import java.util.ArrayList;
import java.util.Collections;


public class Mediador implements Subject{
	private ArrayList<Observer> listaDeLicitantes;
	private double valorAtualDoLance;
	private Observer autorDoUltimoLance;
	
	public Mediador(double lanceInicial){
		this.listaDeLicitantes = new ArrayList<Observer>();
		this.autorDoUltimoLance = null;
		this.valorAtualDoLance = lanceInicial;
	}
	
	
	
	@Override
	public void registerObserver(Observer novoLicitante) {
		this.listaDeLicitantes.add(novoLicitante);
		
	}

	@Override
	public void removeObserver(Observer o) {
		int i = this.listaDeLicitantes.indexOf(o);
		if(i >= 0){
			this.listaDeLicitantes.remove(i);
		}
		
	}

	@Override
	public void notifyObserveres() {
		for(int i = 0; i< this.listaDeLicitantes.size(); i++){
			Observer observer = (Observer)this.listaDeLicitantes.get(i);
			observer.update(this.valorAtualDoLance, this.autorDoUltimoLance);
			
			
		}
	}
	public void atualizaLance(Licitante l){
		if(l.getValorDoLanceNaPlaca() > this.valorAtualDoLance){
			l.baixaPlaca();
			this.autorDoUltimoLance = l;
			this.valorAtualDoLance = l.getValorDoLanceNaPlaca();
			this.notifyObserveres();

		}else{
			//abestado, para de frescar com essa placa. ta atrapalhando. 
			l.baixaPlaca();
		}
		
		
	}
	@Override
	public String toString() {
		String licitante = "";
		if(this.autorDoUltimoLance != null){
			licitante = "\nAutor do ultimo Lance: "+this.autorDoUltimoLance+"\n";
		}else{
			licitante = "Lance Inicial";
		}
		String retorno = "\nLance Atual: "+this.valorAtualDoLance+" "+licitante+"\n";
		return retorno;
	}


}
