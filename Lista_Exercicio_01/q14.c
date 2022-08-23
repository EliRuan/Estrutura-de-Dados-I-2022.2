#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float temp_C, temp_F;
	printf("Digite uma temperatura (em Celsius): ");
	scanf("%f", &temp_C);
	
	temp_F = (9 * temp_C + 160) / 5;
    
	printf("A temperatura em Fahrenheit eh %0.1f", temp_F);
}

