#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	
	float v, vel_m_s;
	printf("Digite uma velocidade (Km/h): ");
	scanf("%f", &v);
	
	vel_m_s = v / 3.6;
	
	printf("Essa velocidade equivale a: m/s %0.2f\n", vel_m_s); 
}

