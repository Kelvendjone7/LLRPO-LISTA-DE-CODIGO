#include <stdio.h>
#include <stdlib.h> 


void peso_ideal(float alt, int sexo) {
	float peso;
	if(sexo == 0) {
	peso = (72.7 * alt)- 58;
	printf("\n\n\tSeu peso ideal: %.2f Kg", peso);
    }else if(sexo == 1) {
    	peso = (62.1 * alt) - 44.7;
    	printf("\n\n\tSeu peso ideal: %.2f Kg", peso);
	}  
}

int main() {
    
    int sexo;
	float h;
    
    printf("\t\t\tINFORME SEUS DADOS\n");
    
	printf("\n\nDigite sua altura: ");
	scanf("%f", &h);
	
	printf("\n\tDigite o seu sexo");
	printf("\n(MASCULINO - 0) (FEMININO - 1): ");
	scanf("%d", &sexo);
	
	system("cls");
	
	printf("\t\tRESULTADO");
	
    peso_ideal(h, sexo);
    
}

