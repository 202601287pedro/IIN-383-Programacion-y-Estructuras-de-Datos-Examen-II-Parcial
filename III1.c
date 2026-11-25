// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio III.1 - Suma y cantidad de digitos

#include <stdio.h>

int main(void) {
    int numero, digito, suma = 0, cantidad = 0;

    do {
        printf("Ingrese un entero positivo: ");
        scanf("%d", &numero);
    } while (numero < 1);

    while (numero > 0) {
        digito = numero % 10;
        suma += digito;
        cantidad++;
        numero = numero / 10;
    }

    printf("Suma de los digitos: %d\n", suma);
    printf("Cantidad de digitos: %d\n", cantidad);

    return 0;
}
