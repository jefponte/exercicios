package br.com.jefponte.contribuinte;

public class PJuridica extends Contribuinte {
	protected String cnpj;

	public PJuridica(String n, double r, String c) {
		this.nome = n;
		this.rendaBrt = r;
		this.cnpj = c;

	}

	@Override
	public double calcImposto() {
		double renda = this.rendaBrt*0.10;
		return renda;
	}

}
