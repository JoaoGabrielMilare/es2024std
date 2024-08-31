#include <stdio.h>
	int main(){
		int ano;
		char nome [99];
printf("Digite o seu nome: ");
scanf("%s", &nome);
printf("Digite o ano que voce nasceu: ");
scanf("%d", &ano);
	if(ano % 4 == 0){
		if(ano % 100 ==0){
			if(ano % 400 ==0){
				printf(" ola %s, seu ano é bissexto",nome);
			}
		}
	}else{
		printf("ola %s, voce nao nasceu em ano bissexto", nome);
	}
		
		return 0;
	}
