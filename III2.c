// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio III.2 - Tabla de multiplicar

#include <stdio.h>

int main(void) {
    int n, contador;

    do {
        printf("Ingrese un numero entre 1 y 12: ");
        scanf("%d", &n);
    } while (n < 1 || n > 12);

    printf("Tabla de multiplicar del %d:\n", n);
    for (contador = 1; contador <= 10; contador++) {
        printf("%d x %d = %d\n", n, contador, n * contador);
    }

    return 0;
}
