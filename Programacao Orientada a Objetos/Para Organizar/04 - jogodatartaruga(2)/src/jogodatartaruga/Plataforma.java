package jogodatartaruga;

public class Plataforma {
	private int[][] matriz;
	private Tartaruga tartaruga;
	private int numeroDeLinhas;
	private int numeroDeColunas;
	

	public void setTartarugas(Tartaruga tartaruga) {
		this.tartaruga = tartaruga;
		

	}

	public Plataforma(int numeroDeLinhas, int numeroDeColunas) {
		this.numeroDeColunas = numeroDeColunas;
		this.numeroDeLinhas = numeroDeLinhas;

		this.matriz = new int[numeroDeLinhas][numeroDeColunas];
		for (int i = 0; i < numeroDeLinhas; i++) {

			for (int j = 0; j < numeroDeColunas; j++) {
				this.matriz[i][j] = 0;

			}
		}

	}

	public void mostraPlataforma() {
		/*
		 * Se 0 nada. se 1 é um risco. se 2 é uma tartaruga olhando para a
		 * direita. se 3 é uma tartaruga olhando para a esquerda.
		 */

		
		for (int i = 0; i < this.numeroDeLinhas; i++) {
			for (int j = 0; j < this.numeroDeColunas; j++) {
				if (this.tartaruga != null) {
					if (i == this.tartaruga.getLinha() 	&& j == this.tartaruga.getColuna()) {
						System.out.print("[:) ]");
						
					} else if (this.matriz[i][j] == 0) {
						System.out.print("[   ]");
					} else if (this.matriz[i][j] == 1) {
						System.out.print("[ * ]");
					}

				}else
				{
					
						
					if (this.matriz[i][j] == 0) {
						System.out.print("[   ]");
					} else if (this.matriz[i][j] == 1) {
						System.out.print("[ * ]");
					}
					
					
				}//fecha else

			}//fecha segundo for
			
			System.out.print("\n");

		}//fecha primeiro for
		
	}
	public void moverTartaruga(int numeroDePosicoes){
		int colunasRestantesNaDireita;
		int linhasRestantesEmBaixo;
		int colunasRestantesNaEsquerda;
		int linhasRestantesEmCima;
		//o numero de posicoes vai depender dessess numesos
		
		
		colunasRestantesNaDireita = this.numeroDeColunas - this.tartaruga.getColuna();
		linhasRestantesEmBaixo = this.numeroDeLinhas - this.tartaruga.getLinha();
		colunasRestantesNaEsquerda = this.tartaruga.getColuna();
		linhasRestantesEmCima = this.tartaruga.getLinha();
		
		//olhamos se a caneta está para baixo ou para cima.
		if(this.tartaruga.getCaneta() == 0){
			//caneta igual a zero significa q  esta pra cima não escreve 
			if(this.tartaruga.getDirecaoDaTartaruga() == 3){
				//tartaruga para direita
				if(numeroDePosicoes > colunasRestantesNaDireita){
					numeroDePosicoes = colunasRestantesNaDireita;
					
				}
				
				this.tartaruga.setColuna(this.tartaruga.getColuna() + numeroDePosicoes);
				
			}else if (this.tartaruga.getDirecaoDaTartaruga() == 4) {
				//tartaruga para esquerda
				if(numeroDePosicoes > colunasRestantesNaEsquerda){
					numeroDePosicoes = colunasRestantesNaEsquerda;
					
				}
				this.tartaruga.setColuna(this.tartaruga.getColuna() - numeroDePosicoes);
				
			}else if (this.tartaruga.getDirecaoDaTartaruga() == 0) {
				//ela olha para baixo e a caneta esta para baixo. 
				if(numeroDePosicoes > linhasRestantesEmBaixo){
					numeroDePosicoes = linhasRestantesEmBaixo;
					
				}
				this.tartaruga.setLinha(this.tartaruga.getLinha() + numeroDePosicoes);
				
			}else if (this.tartaruga.getDirecaoDaTartaruga() == 5) {
				this.tartaruga.setLinha(this.tartaruga.getLinha() - numeroDePosicoes);
				if(numeroDePosicoes > linhasRestantesEmCima){
					numeroDePosicoes = linhasRestantesEmCima;
					
				}
				
			}			
			
			
		}else{
			//caneta diferente de zero. Esta pra baixo.
			//direcao da caneta> 
			if(this.tartaruga.getDirecaoDaTartaruga() == 3){
				//tartaruga para direita
				if(numeroDePosicoes > colunasRestantesNaDireita){
					numeroDePosicoes = colunasRestantesNaDireita;
					
				}
				
				for(int i = 0; i < numeroDePosicoes; i++){
					this.matriz[this.tartaruga.getLinha()][this.tartaruga.getColuna() + i] = 1;
					
				}
				this.tartaruga.setColuna(this.tartaruga.getColuna() + numeroDePosicoes);
				
				
				
				
			}else if (this.tartaruga.getDirecaoDaTartaruga() == 4) {
				//tartaruga para esquerda
				for(int i = 0; i < numeroDePosicoes; i++){
					this.matriz[this.tartaruga.getLinha()][this.tartaruga.getColuna() - i] = 1;
					
				}
				this.tartaruga.setColuna(this.tartaruga.getColuna() - numeroDePosicoes);
				
				
				
			}else if (this.tartaruga.getDirecaoDaTartaruga() == 0) {
				//ela olha para baixo e a caneta esta para baixo.
				if(numeroDePosicoes > linhasRestantesEmBaixo){
					numeroDePosicoes = linhasRestantesEmBaixo;
					
				}
				for(int i = 0; i < numeroDePosicoes; i++){
					this.matriz[this.tartaruga.getLinha() + i][this.tartaruga.getColuna()] = 1;
					
				}
				this.tartaruga.setLinha(this.tartaruga.getLinha() + numeroDePosicoes);
				
			}else if (this.tartaruga.getDirecaoDaTartaruga() == 5) {
				if(numeroDePosicoes > linhasRestantesEmCima){
					numeroDePosicoes = linhasRestantesEmCima;
					
				}
				for(int i = 0; i < numeroDePosicoes; i++){
					this.matriz[this.tartaruga.getLinha() - i][this.tartaruga.getColuna()] = 1;
					
				}
				this.tartaruga.setLinha(this.tartaruga.getLinha() - numeroDePosicoes);
				
				
				
			}
			
			
		}
		
		
	}

	public int[][] getMatriz() {

		return this.matriz;

	}

}