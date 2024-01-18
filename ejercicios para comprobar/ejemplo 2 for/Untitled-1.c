#include <stdio.h>

int main() {
    int numero;
    int factorial = 1;

    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    printf("El factorial de %d es %d\n", numero, factorial);

    return 0;
}
