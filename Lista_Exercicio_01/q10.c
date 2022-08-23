#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float lado, area;
	printf("Digite o valor do lado do quadrado: ");
	scanf("%f", &lado);
	
	area = pow(lado, 2);
    
	printf("A area do quadrado eh %0.1f", area);
}

