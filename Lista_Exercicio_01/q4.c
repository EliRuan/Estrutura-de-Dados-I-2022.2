#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n1, n2, quociente, resto;
	printf("Digite um número inteiro: ");
	scanf("%d", &n1);
	
	printf("Digite um outro número inteiro: ");
	scanf("%d", &n2);
	
	quociente = n1 / n2;
	
	resto = n1 % n2;
	
	printf("O quociente da divisão é %d e o resto é %d \n", quociente, resto); 
	return 0;
}
