#include <iostream>

#include <stdio.h>

#define VET_TAM 3


int main (void) {
	int num [VET_TAM];
	
	for (int valor_1 = 0; valor_1 < VET_TAM; valor_1++) {
        printf("\n Entre com um numero: ");
        scanf("%d", &num[valor_1]);
        printf("O valor digitado foi: %d \n", num[valor_1]);
	
	for (int valor_2 = 0; valor_2 < VET_TAM; valor_2--) {
		printf("\n Entre com um numero: ");
		scanf ("%d", &num[valor_2]);
		printf("O valor digitado foi: %d \n", num[valor_2]);
	
	for (int valor_3= 0; valor_3 < VET_TAM; valor_3--) {
		printf ("\n Entre com um numero: ");
		scanf ("%d", &num[valor_3]);
		printf("O valor digitado foi: %d \n", num[valor_3]);
				
	}
	}	
	}	
	return 0;
}
