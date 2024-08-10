#include <stdio.h>
	int a;
	int main(){
		 printf("digite um numero ");
		 scanf("%d",&a);
		 
		 if(a % 5 == 0){
		 	printf("o numero %d e div por 5", a);
		 }
		
		 else{
		 	printf("o numero %d nao e div por 5", a);
	        }
	
	return 0;	
}
