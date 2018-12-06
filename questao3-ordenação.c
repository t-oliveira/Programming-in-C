//Escreva um algoritmo que recebe um vetor de 10 elementos e depois disso analisa o vetor,
//emitindo a mensagem adequada: (a) O vetor está em ordem crescente (b) O vetor está em ordem
//decrescente (c) O vetor não está em ordem
#define total 3
int main ()
{
	int vetor[3],i,contador,contador2;
	
	for (i=0;i<3;i++)
	{
		printf("Insira um numero: \n");
		scanf("%d", &vetor[i]);
	}
		
		contador=1;
		for (i=0;i<3;i++){
			if (vetor[i+1]>vetor[i]){
			contador++;

}}
		contador2=0;
		for (i=0;i<3;i++){
		if (vetor[i]>vetor[i+1]){
			contador2--;
}}
	
			if (contador==3){
			printf("O vetor esta em ordem crescente ! \n");	}
			
			else if  (contador2==-3){
			printf("O vetor esta em ordem decrescente ! \n");	}
	
			else {
			printf("O vetor nao esta em ordem! \n"); }

return 0;
	
			
