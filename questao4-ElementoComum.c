//Escreva um algoritmo que recebe dois vetores A e B com 10 e 15 elementos respectivamente e
//encontra o maior elemento que está contido ao mesmo tempo nos dois vetores, ou imprime uma mensagem se não houver nenhum elemento em comum.
#include <stdio.h>

int main () {
	int vetorA[3], vetorB[4],i,j,aux;

		for(i=0;i<3;i++){
		
				printf("Insira os valores do primeiro vetor:   ");
			scanf("%d",&vetorA[i]);}
			
				for(j=0;j<4;j++){
				printf("Insira os valores do segundo vetor:   ");
			scanf("%d",&vetorB[j]);}

			

	for(i=0;i<3;i++){
			for(j=0;j<4;j++){
		if (vetorA[i]==vetorB[j])
		{
		aux=vetorA[i];
			}}}

printf("O valor em comum e : %d", aux);	
	
	return 0;

}
	
