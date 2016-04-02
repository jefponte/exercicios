package br.com.jefponte.especificas;


public interface Subject {	
	public void registerObserver(Observer o);
	public void removeObserver(Observer o);
	public void notifyObserveres();
}
