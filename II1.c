// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio II.1 - Clasificacion de triangulos

#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Ingrese los tres lados del triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("No forman triangulo\n");
    } else if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triangulo equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo isosceles\n");
        } else {
            printf("Triangulo escaleno\n");
        }
    } else {
        printf("No forman triangulo\n");
    }

    return 0;
}
