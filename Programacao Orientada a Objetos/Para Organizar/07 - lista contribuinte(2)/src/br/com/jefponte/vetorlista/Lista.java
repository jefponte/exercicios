package br.com.jefponte.vetorlista;

public class Lista {

	private int tam = 0;
	private No ini = null;
	private No fin = null;
	private No corr = null;

	
	
	public boolean vazio() {
		
		if (this.tam == 0) {
			return true;
		} else {
			return false;
		}
	}

	public boolean insIni(Object x) {
		
		
		this.corr = new No(x, this.ini);
		this.ini = this.corr;
		if(this.tam ==0 ){
			this.fin = this.ini;
		}
		
		
	
		
		
		
		if(this.corr == null)
		{
			return false;
		}
		else
		{
			
			this.tam++;
			return true;
			
			
		}
		

	}

	public boolean insFin(Object x) {
		this.corr = new No(x, null);
		this.fin.setProx(this.corr);
		this.fin = this.corr;
		if(this.corr == null)
		{
			return false;
		}
		else
		{
			
			this.tam++;
			return true;
			
			
		}
		
		
	}

	public Object retIni() {
	
		this.ini = this.ini.getProx();
		
		this.tam--;
		return this.ini.getElem();
	}

	public Object getFinal() {
		// insira o código da função
		return this.fin.getElem();
		
	}

	public void posIni() {
		this.corr = this.ini;
		
	}

	public Object getProx() {
		if(this.corr.getProx() != null){
			return this.corr.getProx().getElem();	
		}else{
			return this.ini.getElem();
		}
		
	}
	
	public void passaCorrenteParaOproximo(){
		if(this.corr.getProx().getElem() != null){
			this.corr = this.corr.getProx();
		}else {
			this.corr = this.ini;
		}
	}
	
	public Object getPrimeiro(){
		return this.ini.getElem();
	}
	
	public int getTamanho(){
		return this.tam;
	}

}
