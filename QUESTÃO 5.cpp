#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void positivo(int numero) {
    if(numero <= 0) {
    	printf("\n\tO n�mero � negativo");
    }else if (numero >= 0) {
    	printf("\n\tO n�mero � positivo");
   }
       
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int N;
	
	printf("\t\tDESCOBRIR SE O VALOR � POSITIVO OU NEGATIVO");
	
	printf("\n\n\nDigite um n�mero: ");
	scanf("%d", &N);
	
	positivo(N);
	
}
