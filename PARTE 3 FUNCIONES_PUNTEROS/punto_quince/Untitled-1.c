/*j. 15 – Desarrollar un programa que convierta una temperatura de grados Celsius a Fahrenheit o 
viceversa, según la elección del usuario. [NOTA: La conversión se realiza mediante la siguiente fórmula: 
ºF = ºC x 1.8 + 32]
*/

#include <stdio.h>

// Prototipos de funciones
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main(){
    int opcion;
    float temperatura, resultado;

    printf("Seleccione la opcion de conversion:\n");
    printf("1. Convertir de Celsius a Fahrenheit\n");
    printf("2. Convertir de Fahrenheit a Celsius\n");
    printf("Elija una opcio1n (1 o 2): ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese la temperatura en grados Celsius: ");
        scanf("%f", &temperatura);
        resultado = celsiusToFahrenheit(temperatura);
        printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit.\n", temperatura, resultado);
    } else if (opcion == 2) {
        printf("Ingrese la temperatura en grados Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = fahrenheitToCelsius(temperatura);
        printf("%.2f grados Fahrenheit equivalen a %.2f grados Celsius.\n", temperatura, resultado);
    } else {
        printf("Opcion no valida. Por favor, seleccione 1 o 2.\n");
    }


return 0;
}


// Definicion de la funcion para convertir de Celsius a Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return celsius * 1.8 + 32;
}

// Definicion de la funcion para convertir de Fahrenheit a Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}