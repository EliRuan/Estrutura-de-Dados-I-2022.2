#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float salario, novo_salario, aumento;
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	aumento = salario * 0.25;
	novo_salario = salario + aumento;
	
		
	printf("O salario com aumento de 25%% eh %0.2f", novo_salario); 
	return 0;
}

