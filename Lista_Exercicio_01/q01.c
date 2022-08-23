#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


main()
{

	float v, vel_km_h;
	printf("Digite uma velocidade (m/s)): ");
	scanf("%f", &v);

	vel_km_h = v * 3.6;

	printf("Essa velocidade equivale a: Km/h %0.2f\n", vel_km_h);
}

