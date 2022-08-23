#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    int ano, mes, dia, resto_dia, resto_mes;
	printf("Digite uma idade (em dias): ");
	scanf("%d", &dia);
	
	mes = dia / 30;
	ano = mes / 12;
	resto_mes = mes % 12;
	resto_dia = dia % 30;
    
	printf("A idade eh %d ano(s), %d mes(es) e %d dias", ano, resto_mes, resto_dia);
}

