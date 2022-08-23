#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    int minuto, hora, dia, resto_minuto, resto_hora;
	printf("Digite um valor em MINUTOS: ");
	scanf("%d", &minuto);
	
	hora = minuto / 60;
    dia = hora / 24;
    resto_hora = hora % 24;
    resto_minuto = minuto % 60;
    
	printf("%d MINUTO(S) equivale(m) a %d DIA(S), %d HORA(S) e %d MINUTO(S)", minuto, dia, resto_hora, resto_minuto);
}

