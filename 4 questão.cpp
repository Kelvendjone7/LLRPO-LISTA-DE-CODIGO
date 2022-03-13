#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int r_esfera(int r) {
	int valor;
	valor = 4 / 3 * (r * r * r);
	return valor;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, resultado;
	
	printf("\t\tDESCOBRIR O VOLUME DO RAIO DE UMA ESFERA");
	
	printf("\n\n\nDigite o raio da esfera: ");
	scanf("%d", &num);
	
	resultado = r_esfera(num);
	
	printf("\n\n\tO volume do de %d é: %d", num, resultado);
	
	return 0;
}
