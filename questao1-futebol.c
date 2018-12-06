//Em um campeonato de futebol existem cinco times e cada time possui onze jogadores.
//Faça um programa que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
//a) a quantidade de jogadores com idade inferior a 18 anos;
//b) a média das idades dos jogadores de cada time;
//c) a média das alturas de todos os jogadores do campeonato; e
//d) a porcentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato

#include <stdio.h>
#define TOTALJOGADORES 6
#define JOGADORES 2
//Em um campeonato de futebol existem cinco times e cada time possui onze jogadores.
//Faça um programa que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
//a) a quantidade de jogadores com idade inferior a 18 anos;
//b) a média das idades dos jogadores de cada time;
//c) a média das alturas de todos os jogadores do campeonato; e
//d) a porcentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato.

int main ()
{
int i,j,idade,menor,totaljogadores, idademedia,idadetotal,pesado;
float peso, altura,alturatotal,mediaaltura,porcentagempeso;
menor=0;
pesado=0;

for (i=0;i<3;i++){
	idadetotal=0; //zerar o valor de idadetotal sempre que mudar o time
	for (j=0;j<2;j++)
{
printf("Digite a idade, o peso e a altura do jogador %d do time %d\n:", j + 1, i + 1);
scanf("%d %f %f", &idade, &peso, &altura);

alturatotal = alturatotal + altura;	
idadetotal=idadetotal+idade;

	if (peso > 80)
    {
        pesado++;
    }
    
	if (idade<18)	
	{	
		menor++;	}
		
}
		

		

idademedia=idadetotal/JOGADORES;
printf("--------------------------- \n A media da idade dos jogadores do time %d e: %d  \n --------------------------- \n \n \n",i+1,idademedia);

}


mediaaltura= alturatotal/TOTALJOGADORES;


porcentagempeso=(pesado*100)/TOTALJOGADORES;


printf("--------------------------- \n A media da altura de todos os jogadores e: %f  \n --------------------------- \n \n \n ", mediaaltura);

printf("Quantidade de menor de idade e : %d \n ", menor);

printf("--------------------------- \n A porcentagem dos jogadores acima de 80kg e: %f%  \n --------------------------- \n \n \n ", porcentagempeso);

//a porcentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato.




return 0;

}
