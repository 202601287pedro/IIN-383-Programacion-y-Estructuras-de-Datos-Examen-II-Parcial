// Nombre: Pedro Alexander Lopez
// Numero de cuenta: 202601287
// Ejercicio IV.1 - Caja de supermercado
//
// REFINAMIENTO SUCESIVO
// Nivel 0: Calcular la factura de una compra y mostrar subtotal, descuento, ISV y total.
// Nivel 1:
//   1. Leer y validar la cantidad de productos.
//   2. Leer precio y cantidad de cada producto y acumular el subtotal.
//   3. Calcular el descuento segun el subtotal.
//   4. Calcular el ISV sobre el subtotal menos el descuento.
//   5. Calcular e imprimir el total.
// Nivel 2:
//   1.1 Repetir n mientras sea menor que 1 o mayor que 20.
//   2.1 Repetir por cada producto la lectura del precio hasta que sea mayor que 0.
//   2.2 Repetir la lectura de la cantidad hasta que sea un entero mayor que 0.
//   2.3 Sumar precio * cantidad al subtotal.
//   3.1 Si subtotal >= 1000, descuento = subtotal * 0.10; si no, descuento = 0.
//   4.1 Base imponible = subtotal - descuento; ISV = base imponible * 0.15.
//   5.1 Total = base imponible + ISV; mostrar todos los importes con dos decimales.

#include <stdio.h>

int main(void) {
    int n, i, cantidad;
    float precio, subtotal = 0.0f;
    float descuento, baseImponible, isv, total;

    // Nivel 1 - Paso 1: leer y validar la cantidad de productos.
    do {
        printf("Ingrese la cantidad de productos (1 a 20): ");
        scanf("%d", &n);
    } while (n < 1 || n > 20);

    // Nivel 1 - Paso 2: leer los productos y acumular el subtotal.
    for (i = 1; i <= n; i++) {
        do {
            printf("Ingrese el precio unitario del producto %d: ", i);
            scanf("%f", &precio);
        } while (precio <= 0);

        do {
            printf("Ingrese la cantidad del producto %d: ", i);
            scanf("%d", &cantidad);
        } while (cantidad <= 0);

        subtotal += precio * cantidad;
    }

    // Nivel 1 - Paso 3: calcular el descuento.
    if (subtotal >= 1000) {
        descuento = subtotal * 0.10f;
    } else {
        descuento = 0.0f;
    }

    // Nivel 1 - Paso 4: calcular el ISV sobre el subtotal menos el descuento.
    baseImponible = subtotal - descuento;
    isv = baseImponible * 0.15f;

    // Nivel 1 - Paso 5: calcular e imprimir el total.
    total = baseImponible + isv;

    printf("\n----- FACTURA -----\n");
    printf("Subtotal: L %.2f\n", subtotal);
    printf("Descuento: L %.2f\n", descuento);
    printf("ISV (15%%): L %.2f\n", isv);
    printf("Total a pagar: L %.2f\n", total);

    return 0;
}
