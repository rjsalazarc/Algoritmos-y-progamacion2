#include <stdio.h>
#include <stdlib.h>

intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    // Mostrar valores antes del intercambio
    printf("Antes del intercambio:\n");
    printf("x = %d, y = %d\n", x, y);

    // Llamar a la funci�n de intercambio
    intercambiar(&x, &y);

    // Mostrar valores despu�s del intercambio
    printf("Despu�s del intercambio:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
