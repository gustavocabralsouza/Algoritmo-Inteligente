/*                                                 ENUNCIADO DO PROGRAMA: 
 
 
  Utilizando as estruturas de controle: Sequencial, decisão e laço de repetição. 
 Construa um algoritmo que seja capaz de concluir qual dentre os animais seguintes foi escolhido, através de perguntas e respostas.

 Animais possíveis:
 
"	Leão
"	Cavalo
"	Homem
"	Macaco
"	Morcego
"	Baleia
"	Avestruz
"	Pinguim
"	Pato
"	Águia
"	Tartaruga
"	Crocodilo
"	Cobra
 

Perguntas possíveis:

 
É mamífero?
É quadrúpede?
É carnívoro?
É herbívoro?
 

No algoritmo inteiro será possível fazer 6 perguntas, ou seja, as 4 apresentadas anteriormente e no máximo mais 2 perguntas poderão ser criadas.*/

														//INÍCIO-


//Nessas próximas 3 linhas eu declarei as bibliotecas que utulizei no meu programa, nesse caso 3 bibliotecas incluindo a locale que atualiza o português na execusão do programa
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale>

 

int main () { //Nessa Linha eu inseri a função principal do meu programa
	setlocale (LC_ALL, "portuguese");  //Nessa Linha eu declarei o comando para o português ser estético
	system("title JOGO DOS ANIMAIS-GUSTAVO CABRAL DE SOUZA  "); //Nessa linha eu inseri uma função para o título do meu cmd do código exe. 
	system("color F3 "); //Inseri uma função para dar cor ao meu programa 
	//Nessas 2 Linhas eu declarei as variáveis que utilizei em meu programa
	int mam,qua,car,herb,nada,voa,resp; 
	char nome[10];
	//Nessas próximas 17 linhas eu inseri uma função de deslize que é o "SLEEP", e coloquei as palavras que queria que estivessem dentro dessa função
	Sleep(700); 
	printf(" \t BEM");	
	Sleep(700);	
	printf(" \t VINDO");
	Sleep(700);
	printf(" \t AO");
	Sleep(700);
	printf("\t  NOSSO");
	Sleep(700);
	printf(" \t JOGO");
	Sleep(700);
	printf(" \t DOS");
	Sleep(500);	
	printf("\t  ANIMAIS !\n");
	system("color F1 ");
	printf("\t Deseja experimentar nosso software ? \n 1-PARA SIM \n 2-PARA NÃO \n\n");
	scanf("%d",&resp);
	
	do { //Nessa Linha eu iniciei a estrutura de repetição "do" com o teste no final
		//Nessas próximas 17 linhas eu inseri uma função de deslize que é o "SLEEP", e coloquei as palavras que queria que estivessem dentro dessa função
		printf("Digite");
		Sleep(200);
		printf(" seu ");
		Sleep(700);
		printf(" nome ");
		scanf("%s",&nome);
		system("color 0F"); //Inseri uma função para dar cor ao meu programa 
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".\n");
		system("color F1 "); //Inseri uma função para dar cor ao meu programa 
		system("cls");
		printf("Escolha seu animal preferido ");
		Sleep(600);
		printf(" %s \n\n\n ",nome);
		Sleep(200);
		printf("MENU-\n");
		printf("1-LEÃO\n");
		Sleep(600);
		printf("2-CAVALO \n");
		Sleep(600);
		printf("3-HOMEM \n");
		Sleep(600);
		printf("4-MACACO\n");
		Sleep(600);
		printf("5-MORCEGO\n");
		Sleep(600);
		printf("6-BALEIA\n");
		Sleep(600);
		printf("7-AVESTRUZ\n");
		Sleep(600);
		printf("8-PINGUIM\n");
		Sleep(600);
		printf("9-PATO \n");
		Sleep(600);
		printf("10-ÁGUIA\n");
		Sleep(600);
		printf("11-TARTARUGA\n");
		Sleep(600);
		printf("12-CROCODILO \n");
		Sleep(600);
		printf("13-COBRA\n");
		system("cls"); //Inseri uma função para limpar a tela do meu programa
		printf("VAMOS PARA AS PERGUNTAS %s: \n\n\n ",nome);
		printf("\nELE É MAMÍFERO ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA NÃO \n");
		scanf("%d",&mam);
		printf("ELE É QUADRÚPEDE? ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA NÃO \n");
		scanf("%d",&qua);
		printf("ELE É CARNÍVORO ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA NÃO \n");
		scanf("%d",&car);
		printf("ELE É HERBÍVORO ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA NÃO \n");
		scanf("%d",&herb);
		printf("ELE NADA ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA NÃO \n");
		scanf("%d",&nada);
		printf("ELE VOA ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA NÃO \n");
		scanf("%d",&voa);
		/*Nessas próximas 36 linhas eu inseri diversas estruturas de decisão  para ir eliminando as possibilidades de qual animal ser qual.
		 Fui também inserindo ao usuário qual era seu respectivo animal mais provável */
		 
		system("color 0E"); //Inseri uma função para dar cor ao meu programa 
		system("cls"); //Inseri uma função para limpar a tela do meu programa
		
		if(mam==1 && qua==1 && car==1 && herb==2 && nada==2 && voa==2 ) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM LEÃO ! \n ",nome);
		}
		
		else if(mam==1 && qua==1 && car==2 && herb==1 && nada==2 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM CAVALO ! \n ",nome);
		}
		
		else if(mam==1 && qua==2 && car==2 && herb==2 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM SER HUMANO ! \n ",nome);
		}
		
		else if(mam==1 && qua==1 && car==2 && herb==2 && nada==2 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM MACACO ! \n ",nome);
		}
		
		else if(mam==1 && qua==2 && car==2 && herb==1 && nada==2 && voa==1 ) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM  MORCEGO! \n ",nome);
		}
		
		else if(mam==1 && qua==2 && car==1 && herb==2 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UMA BALEIA ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==2 && herb==2 && nada==2 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM AVESTRUZ ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==1 && herb==2 && nada==2 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM PINGUIM ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==1 && herb==1 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM PATO ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==1 && herb==2 && nada==2 && voa==1) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UMA ÁGUIA ! \n ",nome);
		}
		
		else if(mam==2 && qua==1 && car==2 && herb==1 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UMA TARTARUGA ! \n ",nome);
		}
		
		else if(mam==2 && qua==1 && car==1 && herb==2 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UM CROCODILO ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==1 && herb==2 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL É UMA COBRA ! \n ",nome);
		}
		
		else {
			printf("NÃO EXISTE ESSE ANIMAL EM NOSSA LISTA... \n Tente novamente !, e preste atenção nas perguntas ! \n BOM JOGO !  ");
		}
		
			//Perguntei ao usuário se ele deseja continuar o programa
			 
		printf("Deseja continuar a experimentar nosso software ? \n 1-PARA SIM \n 2-PARA NÃO \n ");
		scanf("%d",&resp);
		
	} while(resp==1);  //Inseri o teste no final para meu respectivo "do", na qual sempre irá se repetir meu programa até que o usuário desejar continuá-lo 
		
		
	return 0; //Inseri a função para retonar o meu programa
	
} //Fechei as chaves que iniciou o meu programa

										//FIM !
