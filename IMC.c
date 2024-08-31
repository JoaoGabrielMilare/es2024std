#include <stdio.h>
int main (){
float peso, altura, imc;
printf("informe o seu peso: ");
scanf("%f", &peso);
printf("informe a sua altura: ");
scanf("%f", &altura);
imc= peso/(altura*altura);
	if(imc < 16.9){
		printf("Voce esta muito abaixo");
	} else {
		if(imc>=17 && imc <=18.4){
		printf("Voce esta abaixo do peso");
		} else{
			if (imc >=18.5 && imc <=24.9){
				printf("voce esta no peso ideal");
			} else{
				if(imc >=25 && imc <= 29.9){
					printf("voce esta acima do peso");
				
				}else{
					if(imc>=30 && imc <= 34.9){
						printf("Voce e obeso grau I");
					} else{
						if(imc >=35 && imc<=40){
							printf("voce e obeso grau II");				
					}else{
						if(imc > 40){
							printf("voce e obeso grau III");
						}
					}
				}
			}
		}
	}
}
return 0;
}

