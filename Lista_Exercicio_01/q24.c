#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    int ano, mes, dia, total_dia;
	printf("Qual sua idade: ");
	scanf("%d", &ano);
	printf("E quantos meses?: ");
	scanf("%d", &mes);
	printf("E quantos dias?: ");
	scanf("%d", &dia);
	
	total_dia = (ano * 365) + (mes * 30) + dia;
    
	printf("Sua idade em DIAS eh %d", total_dia);
}

