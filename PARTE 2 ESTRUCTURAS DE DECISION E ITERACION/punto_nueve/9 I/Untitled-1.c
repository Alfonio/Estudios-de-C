#include <stdio.h>

int main() {
    int edad;

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    if (edad < 0) {
        printf("La persona no nacio.\n");
    } else if (edad <= 11) {
        printf("La persona es un ninio no nacio\n");
    }else if (edad <= 17) {
        printf("La persona es un adolescente.\n");
    } else if (edad <= 25) {
        printf("La persona es un adulto joven.\n");
    } else {
        printf("La persona es un adulto.\n");
    }

    return 0;
}