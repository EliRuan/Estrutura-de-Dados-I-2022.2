#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float valor_reais, novo_valor;
	printf("Digite um valor em Reais (R$): ");
	scanf("%f", &valor_reais);
	
	novo_valor = valor_reais * 0.7;
			
	printf("70%% de R$ %0.2f eh R$ %0.2f", valor_reais, novo_valor); 
	return 0;
}

