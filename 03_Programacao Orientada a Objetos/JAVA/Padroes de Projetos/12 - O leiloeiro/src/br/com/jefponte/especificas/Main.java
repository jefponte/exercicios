package br.com.jefponte.especificas;

public class Main {
	public static void main(String[] args) {
		Mediador m = new Mediador(2000.35);
		Licitante j = new Licitante("Jefferson", m);
		Licitante s = new Licitante("Sobral", m);
		Licitante e = new Licitante("Eudo", m);
		Licitante v = new Licitante("Victor", m);
		
		m.registerObserver(j);
		m.registerObserver(s);
		m.registerObserver(e);
		m.registerObserver(v);
		
		
		j.darLance(3000);
		j.darLance(3500);
		s.darLance(4000);
		e.darLance(5000);
		v.darLance(2000);
		j.darLance(5000);
		

	}

}
