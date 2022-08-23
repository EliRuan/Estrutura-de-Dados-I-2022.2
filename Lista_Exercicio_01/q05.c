#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n1, centena, dezena, unidade;
	printf("Digite um número inteiro (3 dígitos): ");
	scanf("%d", &n1);
	
	centena = n1 / 100;
	dezena = (n1 % 100) / 10;
	unidade = (n1 % 100) % 10;
	
	
	printf("%d - %d - %d", unidade, dezena, centena); 
	return 0;
}
