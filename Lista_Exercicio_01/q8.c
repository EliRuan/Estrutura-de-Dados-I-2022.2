#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

main(){
	
    float n1, n2, n3, p1, p2, p3, numerador, media_ponderada;
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota do aluno: ");
	scanf("%f", &n3);
	
	p1 = 1;
	p2 = 2;
	p3 = 3;
	
	numerador = (n1 * p1) + (n2 * p2) + (n3 * p3);
	media_ponderada = numerador / (p1 + p2 + p3);
    
	printf("A media ponderada das notas eh %0.1f", media_ponderada);
}

