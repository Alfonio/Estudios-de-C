/*Ej. 12 – Resolver nuevamente los incisos del ej. 8 desarrollando funciones.
b)
#include <stdio.h>

#define n 5

int main(){

int suma, i;    

for (i=1; i<n; i+=2 ) {
 suma += i;
 printf("%d -> %d\n", i,suma);
}
    
return 0; */

#include <stdio.h>

// Prototipo de la función
int sumaImparesHastaN(int n);

int main() {
    int n = 5;
    
    // Llamar a la función utilizando el prototipo
    sumaImparesHastaN(n);
    
    return 0;
}

// Definición de la función
int sumaImparesHastaN(int n) {
    int suma = 0;
    for (int i = 1; i < n; i += 2) {
        suma += i;
        printf("%d -> %d\n", i, suma);
    }
    return suma;
}