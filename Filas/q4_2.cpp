#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
using namespace std;
#include "fila.h"

int main(void)
{
    Fila F = fila(5);
    for(int i=0; i<=3; i++) enfileira('A' + i, F);
    while (!vaziaf(F)) cout << desenfileira(F) << endl;
    destroif(&F);
    return 0;
}
