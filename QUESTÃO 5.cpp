#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void positivo(int numero) {
    if(numero <= 0) {
    	printf("\n\tO número é negativo");
    }else if (numero >= 0) {
    	printf("\n\tO número é positivo");
   }
       
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int N;
	
	printf("\t\tDESCOBRIR SE O VALOR É POSITIVO OU NEGATIVO");
	
	printf("\n\n\nDigite um número: ");
	scanf("%d", &N);
	
	positivo(N);
	
}
