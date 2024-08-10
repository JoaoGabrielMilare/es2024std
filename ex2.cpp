#include <stdio.h>
	
	int main(){
	int valor,maior,menor;
		printf("me de o primeiro numero, por favor ");
		scanf("%d", &valor);
		maior = valor;
		menor= valor;
		printf("legal, meu amigo, agora me apresente outro numero ");
		scanf("%d", &valor);
		
		if(valor>maior){
			maior=valor;
		}
		
		if(valor<menor){
			menor = valor;
		}
		
		printf("otimo, voce é muito legal, porfavor me de o terceiro outro numero ");
		scanf("%d", &valor);
		if(valor>maior){
			maior=valor;
		}
		if(valor<menor){
			menor = valor;
		}
		
		printf("voce e otimo, eu implorome de o quarto outro numero ");
		scanf("%d", &valor);
		if(valor>maior){
			maior=valor;
		}
		
		if(valor<menor){
			menor = valor;
		}
	
		printf("agora por ultimo, me apresente o quinto e ultimo outro numero ");
		scanf("%d", &valor);
		if(valor>maior){
			maior=valor;
		}
		
		
		if(valor<menor){
			menor = valor;
		}
	 
		
		
		printf(" muito obrigado meu amigo, esta aqui o seu resultado, maior= %d e menor = %d", maior, menor);
	return 0;	
}
