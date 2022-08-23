#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    int m, km, resto_m;
	printf("Digite uma distancia (em metros): ");
	scanf("%d", &m);
	
	km = m / 1000;
	resto_m = m % 1000;
    
	printf("%d metro(s) equivale a %d quilometro(s) e %d metro(s)", m, km, resto_m);
}

