#include <iostream>
#include <stdio.h>

int main (void){
		
	int valor[2]; //declaraçao e inicio do vetor
	int soma; //declaraçao da variavel para calculo
		
	printf("\n Entre com o primeiro numero: "); //usuario entra com o primeiro valor
	scanf("%d", &valor[0]); // salva o numero digitado na primeira posiçao do vetor
	
	printf("\n Entre com segundo numero: "); //usuario entra com o segundo valor
	scanf("%d", &valor[1]); // salva o numero digitado na segunda posiçao do vetor

	printf("\n Entre com o terceiro numero:  "); //usuario entra com o terceiro valor
	scanf("%d", &valor[2]); // salva o numero digitado na terceira posiçao do vetor	
	
	printf("\n O primeiro numero digitado foi: %d \n", valor[0]); //apresenta o numero salvo no primeiro vetor
	printf(" O segundo numero digitado foi: %d \n", valor[1]); //apresenta o numero salvo no segundo vetor
	printf(" O terceiro numero digitado foi: %d \n", valor[2]); //apresenta o numero salvo no terceiro vetor
	
		soma= valor[0] + valor[1] + valor[2]; // somando os valores armazenados
		printf("\n A soma dos valores e = %d", soma); // apresenta os valores calculados para o usuario
		
	
	return 0;
	
	
}

