// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio II.2 - Categoria de entrada por edad

#include <stdio.h>

int main(void) {
    int edad;

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    if (edad < 0) {
        printf("Edad invalida\n");
    } else if (edad >= 0 && edad <= 4) {
        printf("Entrada gratis\n");
    } else if (edad >= 5 && edad <= 12) {
        printf("Entrada de nino: L 100\n");
    } else if (edad >= 13 && edad <= 59) {
        printf("Entrada de adulto: L 200\n");
    } else {
        printf("Entrada de adulto mayor: L 120\n");
    }

    return 0;
}
