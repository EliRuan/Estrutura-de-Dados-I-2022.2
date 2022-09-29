#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
using namespace std;
#include "fila.h"

int main()
{
    Fila F = fila(5);
    enfileira(1, F);
    enfileira(2, F);
    enfileira(3, F);
    enfileira(desenfileira(F), F);
    enfileira(desenfileira(F), F);
    cout << desenfileira(F) << endl;
}
