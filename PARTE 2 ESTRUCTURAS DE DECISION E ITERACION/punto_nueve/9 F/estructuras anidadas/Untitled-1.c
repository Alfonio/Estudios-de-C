/* 
Ingresar tres letras y escribirlas ordenadas alfabéticamente. Resolver este problema de dos 
formas diferentes. (Utilizando estructuras de decisión independientes y estructuras de 
decisión anidadas).
*/
#include <stdio.h>
//Es horrible este modo...
int main() {
    char letra1, letra2, letra3;

    printf("Ingrese tres letras: ");
    scanf(" %c %c %c", &letra1, &letra2, &letra3);
    if (letra1 <= letra2) {
        if (letra2 <= letra3) {
            printf("Las letras ordenadas alfabéticamente son: %c %c %c\n", letra1, letra2, letra3);
        } else {
            if (letra1 <= letra3) {
                printf("Las letras ordenadas alfabéticamente son: %c %c %c\n", letra1, letra3, letra2);
            } else {
                printf("Las letras ordenadas alfabéticamente son: %c %c %c\n", letra3, letra1, letra2);
            }
        }
    } else {
        if (letra2 <= letra3) {
            if (letra1 <= letra3) {
                printf("Las letras ordenadas alfabéticamente son: %c %c %c\n", letra2, letra1, letra3);
            } else {
                printf("Las letras ordenadas alfabéticamente son: %c %c %c\n", letra2, letra3, letra1);
            }
        } else {
            printf("Las letras ordenadas alfabéticamente son: %c %c %c\n", letra3, letra2, letra1);
        }
    }

    return 0;
}