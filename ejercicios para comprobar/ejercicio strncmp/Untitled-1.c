#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[] = "hola";
    char palabra2[] = "holamundo";
    int n = 5;  // Número de caracteres a comparar

    int resultado = strncmp(palabra1, palabra2, n);

    if (resultado == 0) {
        printf("Las primeras %d letras son iguales.\n", n);
    } else {
        printf("Las primeras %d letras no son iguales.\n", n);
    }

    return 0;
}
