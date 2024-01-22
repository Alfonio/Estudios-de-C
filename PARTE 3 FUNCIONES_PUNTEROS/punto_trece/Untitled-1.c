/*Ej. 13 – Para N personas se registró el peso y la altura, calcular sus índices de masa corporal y 
determinar e informar el porcentaje de los que tienen un índice normal (18 <= ICM <= 21). 
Implementar y utilizar función IMC correctamente parametrizada que devuelva verdadero si el índice 
es normal y falso en caso contrario*/

#include <stdio.h>

// Prototipo de la función
float calcularIMC(float peso, float altura);
int esIMCNormal(float imc);

int main() {
    int N;
    printf("Ingrese el numero de personas: ");
    scanf("%d", &N);

    int personasNormales = 0;

    for (int i = 1; i <= N; i++) {
        float peso, altura;
        printf("Ingrese el peso (en kilogramos) de la persona %d: ", i);
        scanf("%f", &peso);
        printf("Ingrese la altura (en metros) de la persona %d: ", i);
        scanf("%f", &altura);

        float imc = calcularIMC(peso, altura);
        printf("El IMC de la persona %d es: %.2f\n", i, imc);

        if (esIMCNormal(imc)) {
            printf("La persona %d tiene un IMC normal.\n", i);
            personasNormales++;
        } else {
            printf("La persona %d NO tiene un IMC normal.\n", i);
        }
    }

    float porcentajeNormal = (float)personasNormales / N * 100;
    printf("El porcentaje de personas con IMC normal es: %0.2f\n", porcentajeNormal);

    return 0;
}

// Definición de la función para calcular el IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

// Definición de la función para verificar si el IMC es normal
int esIMCNormal(float imc) {
    return (imc >= 18.0 && imc <= 21.0);
}

