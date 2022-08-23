#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    int hora, dia, semana, resto_hora;
	printf("Digite um valor em HORAS: ");
	scanf("%d", &hora);
	
	dia = hora / 24;
	semana = dia / 7;
    resto_hora = hora % 24;
    
	printf("%d HORA(S) equivale(m) a %d SEMANA(S) e %d DIA(S) e %d HORA(S)", hora, semana, dia, resto_hora);
}

