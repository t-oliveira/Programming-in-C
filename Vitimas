//Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
//"Telefonou para a vítima?"
//"Esteve no local do crime?"
//"Mora perto da vítima?"
//"Devia para a vítima?"
//"Já trabalhou com a vítima?"
//A pessoa vai responder com 's' ou 'n'
//O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a
//pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4
//como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".

#include <stdio.h>
#include <stdlib.h>
int main () {
	int i,count=0;
	char resposta[1],resposta2[1],resposta3[1],resposta4[1],resposta5[1];
	


	 	printf("Telefonou para a vitima? \n");
		gets(resposta);
		if (resposta[0]=='s')
		{
				count++;}
         
			
		printf("Esteve no local do crime? \n");
		gets(resposta2);
		
				if (resposta2[0]=='s')
		{
				count++;}
         
         
		
		printf("Mora perto da vitima? \n");
		gets(resposta3);
				if (resposta3[0]=='s')
		{
				count++;}
				

		printf("Devia para a vitima? \n");
		gets(resposta4);
				if (resposta4[0]=='s')
		{
				count++;
         }
         
         

		printf("Ja trabalhou com a vitima? \n");
		gets(resposta5);	
		if(resposta5[0]== 's')
		{
				count++;	}

				

	if (count==2 || count==1){
	
	printf("Voce esta classificado(a) como SUSPEITO(a)! \n");}
	
	else if (count==3 || count==4){
	
	printf("Voce esta classificado(a) como CUMPLICE !!! \n");}
	
	else if (count==5){
		printf("Voce e o ASSASSINO !!! \n");}
		
	else 
	{
		printf("Voce e INOCENTE !!! \n");}
