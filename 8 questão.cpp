#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int valor(int n) {
	int fat;
	for(fat = 1; n > 1; n = n - 1) {
	fat = fat * n;
}
    return fat;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num, resultado;
	
	printf("\t\tDESCOBRIR O FATORIAL DO NUMERO");
	
	printf("\n\n\nDigite um número positivo: ");
	scanf("%d", &num);
	
	resultado = valor(num);

    printf("\n\n\tO fatorial de %d! será: %d", num, resultado);
    
return 0;
}
