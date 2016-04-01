package br.com.jefponte.contribuinte;

public class PFisica extends Contribuinte {
	protected String cpf;

	public PFisica(String n, double r, String c) {

		this.nome = n;
		this.rendaBrt = r;
		this.cpf = c;

	}

	@Override
	public double calcImposto() {
		double imposto = 0.0;
		
		if(this.rendaBrt <= 1400.0){
			//0%, continua no zero, paga imposto não. 
			
		}else if (this.rendaBrt > 1400.0 && this.rendaBrt <= 2100.0) {
			//paga 10% da renda
			imposto = this.rendaBrt*0.10;
			
		}else if (this.rendaBrt > 2100.0 && this.rendaBrt <= 2800.0 ) {
			//15%
			imposto = this.rendaBrt*0.15;
			
		}else if (this.rendaBrt > 2800.0 && this.rendaBrt <= 3600.0 ) {
			//25%
			imposto = this.rendaBrt*0.25;
			
		}else if (this.rendaBrt > 3600.0) {
			//30%
			imposto = this.rendaBrt*0.30;
			
			
		}
		
		return imposto;
	}

}
