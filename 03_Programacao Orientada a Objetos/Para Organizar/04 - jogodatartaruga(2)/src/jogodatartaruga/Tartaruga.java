package jogodatartaruga;

public class Tartaruga {
	
	private int linha;
	private int coluna;
	/**
	 * 3 pra direita
	 * 4 para esquerda
	 * 0 para baixo
	 * 5 para cima
	 * 
	 */
	private int direcaoDaTartaruga;
	/**
	 * se o valor da caneta for 0 significa que esta levantada
	 * se o valor da caneta for 1 significa que está abaixada. 
	 */
	private int canetaDaTartaruga;
	
	public void mexeNaCaneta(int novaPosicao){
		if(novaPosicao == 0 || novaPosicao == 1){
			this.canetaDaTartaruga = novaPosicao;
		}
	}
	public int getCaneta(){
		
		return this.canetaDaTartaruga;
		
	}
	public int getDirecaoDaTartaruga(){
		return this.direcaoDaTartaruga;
	}
	
	public Tartaruga(){	
		this.linha = 0;
		this.coluna = 0;
		this.canetaDaTartaruga = 1;
		this.direcaoDaTartaruga = 3;
		
		

	}
	/**
	 * 3 pra direita
	 * 4 para esquerda
	 * 0 para baixo
	 * 5 para cima
	 * @param direcao
	 */
	public void mudaDirecao(int direcao){
		if(direcao == 3 || direcao == 4 || direcao == 0 || direcao == 5){
			this.direcaoDaTartaruga = direcao;
		}
		
	}
	public int getLinha() {
		return linha;
	}
	public void setLinha(int linha) {
		this.linha = linha;
	}
	public int getColuna() {
		return coluna;
	}
	public void setColuna(int coluna) {
		this.coluna = coluna;
	}
	
	
	
	
	

}
