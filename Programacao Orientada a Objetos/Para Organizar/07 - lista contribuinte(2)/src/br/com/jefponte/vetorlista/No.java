package br.com.jefponte.vetorlista;

class No {
	private Object elem;
	private No prox;

	public No(Object e, No p) {
		this.elem = e;
		this.prox = p;
	}

	public Object getElem() {
		// insira o código da função
		return this.elem;
	}

	public No getProx() {
		// insira o código da função
		return this.prox;
	}

	public void setProx(No o) {
		// insira o código da função
		this.prox = o;
		
	}
}