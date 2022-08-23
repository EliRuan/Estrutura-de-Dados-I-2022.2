#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

main(){
	
    float base, altura, area;
	printf("Digite o valor da base do triangulo: ");
	scanf("%f", &base);
	printf("Digite o valor da altura do triangulo: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
    
	printf("A area do triangulo eh %0.1f", area);
}

