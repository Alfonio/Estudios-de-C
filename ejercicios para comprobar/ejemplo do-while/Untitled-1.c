#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Ingrese un número positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("El número ingresado no es positivo. Inténtelo de nuevo.\n");
        }
    } while (numero <= 0);

    printf("¡Has ingresado un número positivo: %d!\n", numero);

    return 0;
}