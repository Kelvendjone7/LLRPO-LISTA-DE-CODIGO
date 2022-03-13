#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int elevado(int X, int Z) {
	int valor = 1;
	for(int i = 0; i < Z; i++) {
	valor = valor * X;
}
    return valor;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int X, Z, resultado;
	
	printf("\tDESCOBRIR O RESULTADO DO PRIMEIRO VALOR ELEVADO AO SEGUNDO");
	
	printf("\n\n\nDigite o primeiro número: ");
	scanf("%d", &X);
	
	printf("Digite o segundo número: ");
	scanf("%d", &Z);
	
	resultado = elevado(X, Z);
	
	printf("\n\tResultado: %d", resultado);
	
return 0;

}
     
   
