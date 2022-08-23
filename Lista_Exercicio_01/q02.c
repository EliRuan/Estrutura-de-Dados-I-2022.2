#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	
	float valor, cotacao, valor_real;
	printf("Digite umm valor: US$ ");
	scanf("%f", &valor);
	
	cotacao = 5.25;
	valor_real = cotacao * valor;
	
	printf("O valor em reais eh: R$ %0.2f\n", valor_real); 
}

