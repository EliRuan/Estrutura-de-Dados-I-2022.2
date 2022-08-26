#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

main(){
	
    float cobre, zinco, latao;
    
	printf("  Quantidade de latao: Kg ");
	scanf("%f", &latao);
	
	cobre = latao * 0.70;
	zinco = latao * 0.30;
		
	printf("  A quantidade de cobre eh %0.1f Kg\n", cobre);
	printf("  A quantidade de zinco eh %0.1f Kg", zinco);
	printf("\n");
}

