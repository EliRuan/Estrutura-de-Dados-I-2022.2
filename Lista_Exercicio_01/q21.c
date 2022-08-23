#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    int mes, ano, resto_mes;
	printf("Digite um valor em MESES: ");
	scanf("%d", &mes);
	
	ano = mes / 12;
    resto_mes = ano % 12;
    
	printf("%d MES(ES) equivale(m) a %d ANO(S) e %d MES(S)", mes, ano, resto_mes);
}

