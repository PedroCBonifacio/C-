#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	
		int exerc;
		float num1, num2, resultado;
		char continuar, sinal, caractere;
		
		
	do
	{
		system("cls");
		//EXIBIÇÃO DO MENU//
		printf("1 - Definição do Exercício 1 \n");
		printf("2 - Definição do Exercício 2 \n");
		printf("3 - Definição do Exercício 3 \n");
		printf("4 - Definição do Exercício 4 \n");
		printf("-------------------------------");
		//SOLICITANDO O EXERCÍCIO ESCOLHIDO//
		printf("\nEscolha a definição desejada (1-4): ");
		scanf("%d",&exerc);
		system("cls"); 
		//SELECIONANDO O ITEM ESCOLHIDO//
		switch(exerc)
		{
			case 1: char sinal;
					float num1, num2, resultado;
			
					printf("SISTEMA PARA CALCULO\n");
					printf("-------------------------------------------------------\n");
					printf("Digite a operação na ordem: numero, operador, numero \n");
					printf("Exemplos: 1+1, 2*2, 3-3\n");
					printf("Se deseja sair digite 0 0 0\n");
					printf("-------------------------------------------------------\n");
					
					scanf("%f",&num1);
					scanf("%c",&sinal);
					scanf("%f",&num2);
					
					switch(sinal)
					{
						case '+': resultado=num1+num2;
						printf("%.1f + %.1f = %.1f",num1,num2,resultado);
						break;
						
						case '-': resultado=num1-num2;
						printf("%.1f - %.1f = %.1f",num1,num2,resultado);
						break;
						
						case '/': if(num2!=0){
						resultado=num1/num2;
						printf("%.1f / %.1f = %.1f",num1,num2,resultado);
						}
						else{
							printf("Não existe divisão por 0!");
						}
						break;
						
						case 'x': resultado=num1*num2;
						printf("%.1f x %.1f = %.1f",num1,num2,resultado);
						break;
						
						case 'X': resultado=num1*num2;
						printf("%.1f X %.1f = %.1f",num1,num2,resultado);
						break;
						
						case '*': resultado=num1*num2;
						printf("%.1f * %.1f = %.1f",num1,num2,resultado);
						break;
						
						case '.': resultado=num1*num2;
						printf("%.1f . %.1f = %.1f",num1,num2,resultado);
						break;
						
					}
					break;
			case 2: char caractere;
			
			
			printf("SISTEMA PARA RECONHECIMENTO DE CARACTERES\n");
			printf("-------------------------------------------------------\n");
			printf("Digite UM caractere para ser reconhecido: ");
			scanf(" %c", &caractere);
			
			
			
			if(caractere=='A'|| caractere=='E' || caractere=='I' || caractere=='O' || caractere=='U')
			{
				printf("O caractere digitado é uma vogal maiuscula");
			}
			else if(caractere=='a'|| caractere=='e' || caractere=='i' || caractere=='o' || caractere=='u')
			{
				printf("O caractere digitado é uma vogal minuscula");
			}
			else if(caractere=='b'||caractere=='c'|| caractere=='d'|| caractere=='f'|| caractere=='g'|| caractere=='h'|| caractere=='j'|| caractere=='k'|| caractere=='l'|| caractere=='m'|| caractere=='n'|| caractere=='p'|| caractere=='q'|| caractere=='r'|| caractere=='s'|| caractere=='t'|| caractere=='v'|| caractere=='w'|| caractere=='x'|| caractere=='y'|| caractere=='z')
			{
				printf("O caractere digitado é uma consoante minuscula");
			}
			else if(caractere=='B'|| caractere=='C'|| caractere=='D'|| caractere=='F'|| caractere=='G'|| caractere=='H'|| caractere=='J'|| caractere=='K'|| caractere=='L'|| caractere=='M'|| caractere=='N'|| caractere=='P'|| caractere=='Q'|| caractere=='R'|| caractere=='S'|| caractere=='T'|| caractere=='V'|| caractere=='W'|| caractere=='X'|| caractere=='Y'|| caractere=='Z')
			{
				printf("O caractere digitado é uma consoante maiuscula");
			}
			else if(caractere=='1'|| caractere=='2'|| caractere=='3'|| caractere=='4'|| caractere=='5'|| caractere== '6'|| caractere=='7'|| caractere=='8'|| caractere=='9'|| caractere=='0')
			{
				printf("O caractere digitado é um número");
			}
			else
			{
				printf("O caractere digitado é um caractere especial");
			}
			break;
			
			case 3: int placa;
			printf("SISTEMA PARA RODÍZIO\n");
			printf("-------------------------------------------------------\n");
			printf("Digite o ultimo digito da placa de seu carro: \n");
				scanf("%d",&placa);
			
			switch(placa)
			{
				case 1: printf("Segunda-feira");break;
				case 2: printf("Segunda-feira");break;
				case 3: printf("Terça-feira");break;
				case 4: printf("Terça-feira");break;
				case 5: printf("Quarta-feira");break;
				case 6: printf("Quarta-feira");break;
				case 7: printf("Quinta-feira");break;
				case 8: printf("Quinta-feira");break;
				case 9: printf("Sexta-feira") ;break;
				case 0: printf("Sexta-feira");break;
			}
			break;
			
			case 4: int dia, mes, ano;
			printf("SISTEMA PARA VERIFICAÇÃO DE DATAS\n");
			printf("-------------------------------------------------------\n");
			printf("Digite o dia: ");
				scanf("%d",&dia);
			printf("Digite o mês: ");
				scanf("%d",&mes);
			printf("Digite o ano: ");
				scanf("%d",&ano);
			
			if(dia>30)
			{
				printf("Data inválida");
			}
			else if(mes>12)
			{
				printf("Data inválida");
			}
			else if(mes==2 && dia>28)
			{
				printf("Data inválida");
			}
			else
			{
				printf("Data válida");
			}
			
			default: printf("\n-------------------------------------------------------");
			printf("\nFim do programa");
		}
		//PERGUNTANDO SE O USUÁRIO DESEJA REPETIR//
		
		printf("\n-------------------------------------------------------");
		printf("\nDeseja executar novamente o programa? [S]im ou [N]ão: ");
		fflush(stdin);
		scanf("%c",&continuar);
	}while (continuar == 's' || continuar == 'S');
}
