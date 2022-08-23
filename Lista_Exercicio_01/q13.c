#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float raio, volume;
	printf("Digite o valor do raio da esfera: ");
	scanf("%f", &raio);
	
	volume = (4 * 3.14 * pow(raio, 3)) / 3;
    
	printf("O volume da esfera eh %0.2f", volume);
}

