/* 
Ingresar tres letras y escribirlas ordenadas alfabéticamente. Resolver este problema de dos 
formas diferentes. (Utilizando estructuras de decisión independientes y estructuras de 
decisión anidadas).
*/
#include <stdio.h>

int main() {
    char letra1, letra2, letra3;

    printf("Ingrese tres letras: ");
    scanf(" %c %c %c", &letra1, &letra2, &letra3);
//Segun el valor que valga en la tabla ascii, va a ser un numero, ese numero veo si es mayor o menor que el otro.

    if (letra1 > letra2) {
        char temp = letra1; //implemento una variable temporal para almacenar un dato que necesito(auxiliar)
        letra1 = letra2;
        letra2 = temp;
    }

    if (letra2 > letra3) {
        char temp = letra2;
        letra2 = letra3;
        letra3 = temp;
    }

    if (letra1 > letra2) {
        char temp = letra1;
        letra1 = letra2;
        letra2 = temp;
    }

    printf("Las letras ordenadas alfabeticamente son: %c %c %c\n", letra1, letra2, letra3);

    return 0;
}