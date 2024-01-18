//Ejercicio 9 D:  leer N caracteres y hallar y escribir la cantidad de letras mayúsculas ingresadas 
//Utilizar #include <ctype.h> para poder usar isupper(caracter) donde dice si es mayuscula o pone mayuscula, si quiero minuscula
#include <stdio.h>
#include <ctype.h>

int main() {
    int N;
    printf("Ingrese la cantidad de caracteres a leer: ");
    scanf("%d", &N);

    // Variables para contar letras mayúsculas
    int contadorMayusculas = 0;

    printf("Ingrese los %d caracteres:\n", N);

    // Consumir el carácter de nueva línea después de ingresar N
    getchar();

    // Leer N caracteres
    for (int i = 0; i < N; i++) {
        char caracter;
        scanf("%c", &caracter);

        // Verificar si el carácter es una letra mayúscula
        if (isupper(caracter)) {
            contadorMayusculas++;
        }
    }

    printf("Cantidad de letras mayúsculas ingresadas: %d\n", contadorMayusculas);

    return 0;
}