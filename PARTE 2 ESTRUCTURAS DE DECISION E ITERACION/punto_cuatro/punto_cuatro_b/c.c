#include <stdio.h>
// Pedir y hacer la suma de 2 numeros
int main() {
    int num1, num2;
    printf("Ingrese dos numeros: ");
     scanf("%d %d", &num1, &num2);
         printf("Usted ingreso los numeros: %d y %d\n", num1, num2); 
//tener en cuenta que la asginacion de memoria cuenta como su espacio al escribirlo "%d y %d"
    printf("La suma de %d y %d es %d\n", num1, num2, num1 + num2); 
//tambien puedo poner una variable mas y guardarlo en suma = num1 + num2, es lo mismo
    return 0; 
}