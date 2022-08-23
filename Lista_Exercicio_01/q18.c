#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float m, cm;
	printf("Digite uma distancia (em metros): ");
	scanf("%f", &m);
	
	cm = m * 100;
    
	printf("%0.2f metro(s) equivale a %0.2f centimetro(s)", m, cm);
}

