#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int divisores(int valor) {
	int div = 0;
	
	for(int i = valor; i > 0; i--) {
	if(valor % i == 0)div++;
}
	return div;
}
    
int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int n, resultado;
	
	printf("\t\tDESCOBRIR A SOMA DOS DIVISORES DO VALOR");
	
	printf("\n\n\nDigite um número positivo: ");
	scanf("%d", &n);
	
	resultado = divisores(n);
	
	printf("\n\n\tA soma dos divisores de %d é: %d", n, resultado);
	
return 0;
   
}

	

