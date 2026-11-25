// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio I.2 - Suma de cuadrados de numeros impares

#include <stdio.h>

int main(void) {
    int n, i, suma = 0, opcion;

    printf("Ingrese n: ");
    scanf("%d", &n);

    opcion = 1;
    while (opcion == 1) { // ERROR: se usaba =, que asigna; se necesita == para comparar.
        for (i = 1; i <= n; i++) { // ERROR: i < n excluia el propio n; se cambia a i <= n.
            if (i % 2 == 1) {
                suma = suma + i * i;
            }
        }
        opcion = 0;
    }

    printf("Suma de cuadrados impares: %d\n", suma);
    return 0;
}
