#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float n1, n2, n3, media;
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	printf("Digite o primeiro valor: ");
	scanf("%f", &n2);
	printf("Digite o primeiro valor: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
    
	printf("A media dos numeros digitados eh %0.1f", media);
}

