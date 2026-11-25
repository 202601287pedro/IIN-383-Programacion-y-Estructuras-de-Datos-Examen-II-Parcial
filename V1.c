// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio V.1 - Calificaciones del grupo
//
// PLAN DE PRUEBAS:
// Caso 1 (normal):
// Entrada: n=3; calificaciones=80, 60, 100.
// Salida esperada: promedio=80.00; aprobados=3; maxima=100.00.
//
// Caso 2 (limite inferior de n):
// Entrada: n=1; calificacion=75.
// Salida esperada: promedio=75.00; aprobados=1; maxima=75.00.
//
// Caso 3 (incluye calificacion reprobada y limite):
// Entrada: n=4; calificaciones=0, 59, 60, 100.
// Salida esperada: promedio=54.75; aprobados=2; maxima=100.00.
//
// COMPLEJIDAD TEMPORAL:
// O(n), porque el programa recorre una sola vez las n calificaciones.
// Cada iteracion realiza una cantidad constante de operaciones.

#include <stdio.h>

int main(void) {
    int n, i, aprobados = 0;
    float calificacion, suma = 0.0f, maxima = 0.0f, promedio;

    do {
        printf("Ingrese la cantidad de estudiantes (1 a 30): ");
        scanf("%d", &n);
    } while (n < 1 || n > 30);

    for (i = 1; i <= n; i++) {
        do {
            printf("Ingrese la calificacion del estudiante %d (0 a 100): ", i);
            scanf("%f", &calificacion);
        } while (calificacion < 0 || calificacion > 100);

        suma += calificacion;

        if (calificacion >= 60) {
            aprobados++;
        }

        if (i == 1 || calificacion > maxima) {
            maxima = calificacion;
        }
    }

    promedio = suma / n;

    printf("\n----- RESULTADOS DEL GRUPO -----\n");
    printf("Promedio del grupo: %.2f\n", promedio);
    printf("Estudiantes aprobados: %d\n", aprobados);
    printf("Calificacion maxima: %.2f\n", maxima);

    return 0;
}
