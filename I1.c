// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio I.1 - Correccion de errores

#include <stdio.h>

int main(void) {
    int n, i, pares = 0;

    do {
        printf("Ingrese un numero entre 1 y 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10); // ERROR: faltaba el punto y coma al final del do-while.

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) { // ERROR: se utilizaba = (asignacion) en vez de == (comparacion).
            pares++;
        }
    }

    if (pares < 2 || pares > 3) { // ERROR: && hacia imposible la condicion; se corrige con ||.
        printf("Cantidad fuera de rango\n");
    } else {
        printf("Pares: %d\n", pares);
    }

    return 0;
}
