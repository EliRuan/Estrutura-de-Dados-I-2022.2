#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float kg, g;
	printf("Digite um peso (em Kg): ");
	scanf("%f", &kg);
	
	g = kg * 1000;
    
	printf("%0.1f kg equivale a %0.1f g", kg, g);
}

