#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float km, m;
	printf("Digite uma distancia (em Km): ");
	scanf("%f", &km);
	
	m = km * 1000;
    
	printf("%0.2f km equivale a %0.2f m", km, m);
}

