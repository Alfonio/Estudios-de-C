/*Ej. 14 – Escribir un programa que funcione como una calculadora que realice operaciones de suma, 
resta, multiplicación y división. Además, permitir elevar un número a una potencia entera ingresada 
por el usuario utilizando funciones para cada operación.
*/

#include <stdio.h>

//prototipo funcion
float funcionSuma(float num1, float num2);
float funcionResta(float num1, float num2);
float funcionMultiplicacion(float num1, float num2);
float funcionDivision(float num1, float num2);
float funcionExponencial(float base, float exponente);

//Main
int main() {
    //NO INCLUYE FUNCIONES IMAGINARIAS
    char operador;
    float num1, num2;

    printf("Bienvenido a mi calculadora :D\n");

 int operacionValida = 0;
//Tendo que hacer un do-while porque si me ingresa un operador invalido, tengo que volver a preguntarle  
do {
     printf("Ingrese el operador que quiera usar ('+, -, *, /, ^')\n");
     scanf(" %c", &operador);  // Añadí un espacio antes de %c para evitar problemas con el salto de línea anterior.
     printf("Usted eligio el operador: %c\n", operador);
     switch (operador) {
        case '+':
            printf("Ingrese sus operandos num1 y num2\n");
            scanf("%f %f", &num1, &num2);

            printf("El resultado es = %0.0f\n", funcionSuma(num1, num2));
            operacionValida = 1;
            break;
        case '-':
            printf("Ingrese sus operandos num1 y num2\n");
            scanf("%f %f", &num1, &num2);

            printf("El resultado es = %0.0f\n", funcionResta(num1, num2));
            operacionValida = 1;
            break;
        case '*':
            printf("Ingrese sus operandos num1 y num2\n");
            scanf("%f %f", &num1, &num2);

            printf("El resultado es = %0.0f\n", funcionMultiplicacion(num1, num2));
            operacionValida = 1;
            break;
        case '/':
            printf("Ingrese sus operandos num1 y num2\n");
            scanf("%f %f", &num1, &num2);

            if (num2 != 0) {
                printf("El resultado es = %0.0f\n", funcionDivision(num1, num2));
                 operacionValida = 1;
             } else {
                 printf("La división por cero no es válida. Ingrese otro operador.\n");
             }
            break;
        case '^':
            float base,exponente;
            printf("Ingrese la base y el exponente deseado\n");
            scanf("%f %f", &base,&exponente);   

            printf("El resultado es = %0.2f\n", funcionExponencial( base,exponente)); 
            //poner %0.2f porque si es negativo el exponente me da 0 siempre
            operacionValida = 1;
            break;    
        default:
            printf("No es un operador válido para esta calculadora. Ingrese otro operador.\n");
            break;
        }
} while (!operacionValida);


return 0;
}

//Definiciones de funciones

float funcionSuma(float num1, float num2) {
    float suma = num1 + num2;
    return suma;
}

float funcionResta(float num1, float num2) {
    float resta = num1 - num2;
    return resta;
}

float funcionMultiplicacion(float num1, float num2) {
    float multiplicacion = num1 * num2;
    return multiplicacion;
}

float funcionDivision(float num1, float num2) {
    float Division = num1 / num2;
    return Division;
}

float funcionExponencial(float base, float exponente) {
    float resultado = 1.0;  // Inicializa resultado a 1.0 porque sino no anda, es para garantizar resultados correctos en todas las situaciones

    if (exponente == 0) {
        resultado = 1.0;
    } else if (exponente > 0) {
        for (int i = 0; i < exponente; i++) {
            resultado *= base;
        }
    } else if (exponente < 0) {
        for (int i = 0; i > exponente; i--) {
            resultado /= base;
        }
    }

    return resultado;
}