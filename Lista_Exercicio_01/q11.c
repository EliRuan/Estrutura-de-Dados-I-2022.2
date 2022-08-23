#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float altura, base, area;
	printf("Digite o valor da altura do retangulo: ");
	scanf("%f", &altura);
	printf("Digite o valor da base do retangulo: ");
	scanf("%f", &base);
	
	area = base * altura;
    
	printf("A area do retangulo eh %0.1f", area);
}

