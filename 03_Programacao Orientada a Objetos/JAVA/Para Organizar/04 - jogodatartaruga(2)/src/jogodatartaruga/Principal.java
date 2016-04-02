package jogodatartaruga;

public class Principal {
	

	
	public static void main(String[] args) {
		Jogador jogo = new Jogador();
		/*
		"----------Instrucoes
		
		1- Caneta Para Cima 
		2- Caneta Para Baixo
		Direcao da tartaruga
		3- Tartaruga Olha para Direita 
		4- Tartaruga olha para Esquerda
		6- Mostra Arena 
		5- Move tartaruga n posicoes
		9- Sair do Jogo
		
		A cada comando realizaremos a operação e mostraremos a plataforma
		*/
		
		/*
		 * 2 - caneta para baixo
		 * 5 - move tartaruga. 
		 * 12 - 12 posicoes para direita
		 * 3 - olha para direita
		 * 5 - anda mais 
		 * 12 - 12 posicoes
		 * 6 mostra plataforma
		 * 0 - olha para baixo
		 * 5 - anda 
		 * 4 - 4 posicoes
		 * 1 - caneta para cima
		 * 
		 * 
		 */
		int[] commands = {2, 5, 12, 3, 5, 12, 6, 0, 5, 4, 1, 5, 3, 2, 5, 3, 6};

		//int[] arrayDeComandos = {1, 2, 3};
		
		
		jogo.iniciaJogo(commands);
		
		
			
		
		
		
		
		


	}

}
