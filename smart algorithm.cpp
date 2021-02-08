/*                                                 ENUNCIADO DO PROGRAMA: 
 
 
  Utilizando as estruturas de controle: Sequencial, decis�o e la�o de repeti��o. 
 Construa um algoritmo que seja capaz de concluir qual dentre os animais seguintes foi escolhido, atrav�s de perguntas e respostas.

 Animais poss�veis:
 
"	Le�o
"	Cavalo
"	Homem
"	Macaco
"	Morcego
"	Baleia
"	Avestruz
"	Pinguim
"	Pato
"	�guia
"	Tartaruga
"	Crocodilo
"	Cobra
 

Perguntas poss�veis:

 
� mam�fero?
� quadr�pede?
� carn�voro?
� herb�voro?
 

No algoritmo inteiro ser� poss�vel fazer 6 perguntas, ou seja, as 4 apresentadas anteriormente e no m�ximo mais 2 perguntas poder�o ser criadas.*/

														//IN�CIO-


//Nessas pr�ximas 3 linhas eu declarei as bibliotecas que utulizei no meu programa, nesse caso 3 bibliotecas incluindo a locale que atualiza o portugu�s na execus�o do programa
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale>

 

int main () { //Nessa Linha eu inseri a fun��o principal do meu programa
	setlocale (LC_ALL, "portuguese");  //Nessa Linha eu declarei o comando para o portugu�s ser est�tico
	system("title JOGO DOS ANIMAIS-GUSTAVO CABRAL DE SOUZA  "); //Nessa linha eu inseri uma fun��o para o t�tulo do meu cmd do c�digo exe. 
	system("color F3 "); //Inseri uma fun��o para dar cor ao meu programa 
	//Nessas 2 Linhas eu declarei as vari�veis que utilizei em meu programa
	int mam,qua,car,herb,nada,voa,resp; 
	char nome[10];
	//Nessas pr�ximas 17 linhas eu inseri uma fun��o de deslize que � o "SLEEP", e coloquei as palavras que queria que estivessem dentro dessa fun��o
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
	printf("\t Deseja experimentar nosso software ? \n 1-PARA SIM \n 2-PARA N�O \n\n");
	scanf("%d",&resp);
	
	do { //Nessa Linha eu iniciei a estrutura de repeti��o "do" com o teste no final
		//Nessas pr�ximas 17 linhas eu inseri uma fun��o de deslize que � o "SLEEP", e coloquei as palavras que queria que estivessem dentro dessa fun��o
		printf("Digite");
		Sleep(200);
		printf(" seu ");
		Sleep(700);
		printf(" nome ");
		scanf("%s",&nome);
		system("color 0F"); //Inseri uma fun��o para dar cor ao meu programa 
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".\n");
		system("color F1 "); //Inseri uma fun��o para dar cor ao meu programa 
		system("cls");
		printf("Escolha seu animal preferido ");
		Sleep(600);
		printf(" %s \n\n\n ",nome);
		Sleep(200);
		printf("MENU-\n");
		printf("1-LE�O\n");
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
		printf("10-�GUIA\n");
		Sleep(600);
		printf("11-TARTARUGA\n");
		Sleep(600);
		printf("12-CROCODILO \n");
		Sleep(600);
		printf("13-COBRA\n");
		system("cls"); //Inseri uma fun��o para limpar a tela do meu programa
		printf("VAMOS PARA AS PERGUNTAS %s: \n\n\n ",nome);
		printf("\nELE � MAM�FERO ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA N�O \n");
		scanf("%d",&mam);
		printf("ELE � QUADR�PEDE? ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA N�O \n");
		scanf("%d",&qua);
		printf("ELE � CARN�VORO ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA N�O \n");
		scanf("%d",&car);
		printf("ELE � HERB�VORO ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA N�O \n");
		scanf("%d",&herb);
		printf("ELE NADA ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA N�O \n");
		scanf("%d",&nada);
		printf("ELE VOA ? \n");
		printf("1-PARA SIM \n");
		printf("2 PARA N�O \n");
		scanf("%d",&voa);
		/*Nessas pr�ximas 36 linhas eu inseri diversas estruturas de decis�o  para ir eliminando as possibilidades de qual animal ser qual.
		 Fui tamb�m inserindo ao usu�rio qual era seu respectivo animal mais prov�vel */
		 
		system("color 0E"); //Inseri uma fun��o para dar cor ao meu programa 
		system("cls"); //Inseri uma fun��o para limpar a tela do meu programa
		
		if(mam==1 && qua==1 && car==1 && herb==2 && nada==2 && voa==2 ) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM LE�O ! \n ",nome);
		}
		
		else if(mam==1 && qua==1 && car==2 && herb==1 && nada==2 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM CAVALO ! \n ",nome);
		}
		
		else if(mam==1 && qua==2 && car==2 && herb==2 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM SER HUMANO ! \n ",nome);
		}
		
		else if(mam==1 && qua==1 && car==2 && herb==2 && nada==2 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM MACACO ! \n ",nome);
		}
		
		else if(mam==1 && qua==2 && car==2 && herb==1 && nada==2 && voa==1 ) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM  MORCEGO! \n ",nome);
		}
		
		else if(mam==1 && qua==2 && car==1 && herb==2 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UMA BALEIA ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==2 && herb==2 && nada==2 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM AVESTRUZ ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==1 && herb==2 && nada==2 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM PINGUIM ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==1 && herb==1 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM PATO ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==1 && herb==2 && nada==2 && voa==1) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UMA �GUIA ! \n ",nome);
		}
		
		else if(mam==2 && qua==1 && car==2 && herb==1 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UMA TARTARUGA ! \n ",nome);
		}
		
		else if(mam==2 && qua==1 && car==1 && herb==2 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UM CROCODILO ! \n ",nome);
		}
		
		else if(mam==2 && qua==2 && car==1 && herb==2 && nada==1 && voa==2) {
			printf("ACHAMOS SEU ANIMAL %s \n SEU ANIMAL � UMA COBRA ! \n ",nome);
		}
		
		else {
			printf("N�O EXISTE ESSE ANIMAL EM NOSSA LISTA... \n Tente novamente !, e preste aten��o nas perguntas ! \n BOM JOGO !  ");
		}
		
			//Perguntei ao usu�rio se ele deseja continuar o programa
			 
		printf("Deseja continuar a experimentar nosso software ? \n 1-PARA SIM \n 2-PARA N�O \n ");
		scanf("%d",&resp);
		
	} while(resp==1);  //Inseri o teste no final para meu respectivo "do", na qual sempre ir� se repetir meu programa at� que o usu�rio desejar continu�-lo 
		
		
	return 0; //Inseri a fun��o para retonar o meu programa
	
} //Fechei as chaves que iniciou o meu programa

										//FIM !
