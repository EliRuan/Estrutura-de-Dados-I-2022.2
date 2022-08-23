#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float raio, comprimento;
	printf("Digite o valor do raio da circunferencia: ");
	scanf("%f", &raio);
	
	comprimento = 2 * 3.14 * raio;
    
	printf("O valor do raio de uma circunferencia eh %0.2f", comprimento);
}

