#include <stdio.h>
//suma de numeros pares del 1 al 100
int main() {
    int suma = 0;

    for (int i = 2; i <= 100; i += 2) {
        suma += i;
    }

    printf("La suma de los numeros pares del 1 al 100 es: %d\n", suma);

    return 0;
}