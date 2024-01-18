//Ejercicio 9 C :mostrar el valor medio de dos enteros leídos

#include <stdio.h>

int main() {
    int num1, num2;
    float promedio;

    printf("Ingrese el primer entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo entero: ");
    scanf("%d", &num2);

    // Calcula el valor medio
    promedio = (float)(num1 + num2) / 2.0f;

    printf("El valor medio de %d y %d es: %.2f\n", num1, num2, promedio);

    return 0;
}