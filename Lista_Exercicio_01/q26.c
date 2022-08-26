#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    int ano_fuma, cigarros_dia, total_cigarros, carteira;
    float preco_carteira, preco_cigarro, total_gasto;
    
	printf("Fuma ha quantos anos? ");
	scanf("%d", &ano_fuma);
	printf("Quantos cigarros por dia? ");
	scanf("%d", &cigarros_dia);
	printf("Qual o preco da carteira? R$ ");
	scanf("%f", &preco_carteira);
	
	carteira = 20;
	preco_cigarro = preco_carteira / carteira;
	total_cigarros = ano_fuma  * 365;
	total_gasto = total_cigarros * (preco_cigarro * cigarros_dia);
    
    printf("Cigarros por carteira: 20\n");
	printf("Preco do cigarro: R$ %0.2f\n", preco_cigarro);
    printf("Total de cigarros fumados: %0.2d\n", total_cigarros);
	printf("O total gasto foi R$ %0.2f", total_gasto);
}

