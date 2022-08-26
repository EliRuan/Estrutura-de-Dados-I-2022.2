#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float custo_de_fabrica, perc_dist, impostos, total_custo;
    
	printf("  Custo de fabrica do carro: R$ ");
	scanf("%f", &custo_de_fabrica);
	
	perc_dist = custo_de_fabrica * 0.28;
	impostos = custo_de_fabrica * 0.45;
	total_custo = custo_de_fabrica + perc_dist + impostos;
	
	printf("  O custo ao consumidor sera de R$ %0.2f", total_custo);
	printf("\n");
}

