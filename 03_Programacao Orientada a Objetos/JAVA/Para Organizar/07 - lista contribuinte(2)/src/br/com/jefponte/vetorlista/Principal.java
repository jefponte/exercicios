package br.com.jefponte.vetorlista;

import br.com.jefponte.contribuinte.Contribuinte;

public class Principal {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		
		//primeira etapa é mostrar o vetor criado no metodo estatico de Contribuinte. 
		
		Contribuinte []list;
		list = Contribuinte.listaContr();

			
		//obter a lista de contribuintes na list
		 System.out.printf("NOME IMPOSTO\n");
		 System.out.printf("==================== =======\n\n"); 
		 
		 for(Contribuinte contribuinte: list){			 
			 // coloque aqui o comando for
			 // o printf a seguir deve exibir o nome e o
			 // imposto que o contribuinte irá pagar
			
			// System.out.println("Nome: "+contribuinte.getNome()+" Imposto: "+contribuinte.calcImposto());

		 }
		
		 
		 //a segunda etapa é tentar alimentar a classe da pratica anterior com elementos de contribuinte. 
		Lista li = new Lista();
			
		for(Contribuinte contribuinte: list){			 
				 // coloque aqui o comando for
				 // o printf a seguir deve exibir o nome e o
				 // imposto que o contribuinte irá pagar
				
			//	 System.out.println("Nome: "+contribuinte.getNome()+" Imposto: "+contribuinte.calcImposto());
				 li.insIni(contribuinte);
				 

		 }
			
		
		//a lista já está alimentada. E agora?
		//Agora, meu chapa, temos que mostrar usando os metodos da lista. Primeiro posicionar o corrente
		// no inicio e ir pegando o proximo e o proximo e o proximo até percorrer todos os nomes. 
		int numeroDeElementos = li.getTamanho();
		li.posIni();
		for(int i = 0; i < numeroDeElementos; i++){
			Contribuinte c = (Contribuinte) li.getProx();
			System.out.println("Nome: "+c.getNome()+", imposto: "+c.calcImposto());
			try {
				li.passaCorrenteParaOproximo();	
			} catch (Exception e) {
				System.out.println("Chegou no final! :) ");
			}
		}
		

	/*	

		Vetor vet = new Vetor(1, 2);
		
		li.insIni(vet);
		System.out.println(li.getProx());
		
		Vetor vet2 = new Vetor(3, 4);
		
		li.insIni(vet2);
		System.out.println(li.getFinal());
		System.out.println(li.getProx());

		Vetor vet3 = new Vetor(5, 6);
		
		li.insIni(vet3);
		System.out.println(li.getProx());		
		
		
		Vetor vet4 = new Vetor(7, 8);
		
		li.insFin(vet4);
		System.out.println(li.getFinal());
		
		*/
		
	}

}
