#include <stdio.h>

int main() {
    double numero_double = 3.14159;
    int numero_entero;

    // Realizar un casting explícito de double a int
    numero_entero = (int)numero_double;

    printf("Numero double: %lf\n", numero_double);
    printf("Numero entero después del casting: %d\n", numero_entero);

    return 0;
}
