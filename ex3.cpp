#include <stdio.h>
	int main(){
		float n1,n2,n3,n4,s;
		char es;
		printf("Escolha o tipo de media:\nA-Aritimetica\nP-Ponderada\nH-Harmonica\n");
		scanf("%c", &es);
		printf("nota 1: ");
		scanf("%f",&n1);
		
		printf("nota 2: ");
		scanf("%f",&n2);
		
		printf("nota 3: ");
		scanf("%f",&n3);
		
		printf("nota 4: ");
		scanf("%f",&n4);
		
		if(es =='A'){
			s=(n1+n2+n3+n4)/4;
		}
		
		if(es=='P'){
			s=(2*n1+3*n2+5*n3+10*n4)/20;
		}
		if(es=='H'){
			s=4/(1/n1)+(1/n2)+(1/n3)+(1/n4);
		}
		
	
		
		
		printf("resultado é: %f", s);
	return 0;	
}
