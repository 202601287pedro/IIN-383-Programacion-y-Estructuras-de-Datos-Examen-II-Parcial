// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio I.3 - Factorial

#include <stdio.h>

int main(void) {
    int numero, contador, factorial;

    do {
        printf("Ingrese un entero no negativo: ");
        scanf("%d", &numero);
    } while (numero < 0); // ERROR: la condicion estaba al reves; debe repetir si el numero es negativo.

    factorial = 1; // ERROR: factorial debe iniciar en 1, no en 0, porque 0 anula toda multiplicacion.

    for (contador = 1; contador <= numero; contador++) {
        factorial = factorial * contador;
    }

    if (numero == 0) { // ERROR: se usaba =, asignacion; se corrige con == para comparar.
        printf("0! = 1\n");
    } else {
        printf("%d! = %d\n", numero, factorial);
    }

    return 0;
}
