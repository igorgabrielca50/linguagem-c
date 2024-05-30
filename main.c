#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {

	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, tentativas;
	printf("digite o primeiro valor:");
	scanf("%d" , &num1);
	
	printf("digite o primeiro valor:");
	scanf("%d" , &num2);
	
	if(num1 > num2){
		printf("está correto!");
		}else{
			for(tentativas=1; tentativas < 5;tentativas++){
			
				printf("incorreto tente de novo! tentativa %d\n" , tentativas);
				printf("\n");
			
			printf("digite o primeiro valor: ");
			scanf("%d" , &num1);
			
			printf("digite o segundo valor: ");
			scanf("%d" , &num2);
			
			}
		}
		
		return 0;
}
