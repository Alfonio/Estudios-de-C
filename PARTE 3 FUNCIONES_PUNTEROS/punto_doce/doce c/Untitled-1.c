/*Ej. 12 – Resolver nuevamente los incisos del ej. 8 desarrollando funciones.
#include <stdio.h>

#define n 5

int main(){

int suma, i;    

for (suma = 1,i=n; i>0; i-- ) {
 suma *= i;
 printf("%d -> %d\n", i, suma);
 }
 
return 0; 
}
*/

#include <stdio.h>

// Prototipo de la función
int factorial(int n);

//Main
int main() {
    int n = 5;
    
    // Llamar a la función utilizando el prototipo
    factorial(n);
    
    return 0;
}

// Definición de la función
int factorial(int n) {
    int suma = 1;
    for (int i = n; i > 0; i--) {
        suma *= i;
        printf("%d -> %d\n", i, suma);
    }
    return suma;
}