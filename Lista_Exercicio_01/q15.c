#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float temp_C, temp_F;
	printf("Digite uma temperatura (em Fahrenheit): ");
	scanf("%f", &temp_F);
	
	temp_C = (5 * temp_F - 160) / 9;
    
	printf("A temperatura em Celsius eh %0.1f", temp_C);
}

