#include <stdio.h>

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números enteros
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    // Determinar el mínimo de los dos números
    int min;
    if (num1 < num2) {
        min = num1;
    } else {
        min = num2;
    }

    // Imprimir el mínimo
    printf("El minimo de %d y %d es %d\n", num1, num2, min);

    return 0;
}