/*Ej. 12 – Resolver nuevamente los incisos del ej. 8 desarrollando funciones.

Ej. 8 – Indicar la salida de los siguientes fragmentos de código, sin ejecutarlos: 
a)
#include <stdio.h>
#define n 5

int main(){
 int suma, i; 
 suma = 0;
 for (i=1; i<=n; i ++){
 suma += i;
 printf("%d\n", suma);     
 }
 
}
*/

#include <stdio.h>

// Prototipo de la función
int sumaHastaN(int n);

int main() {
    int n = 5;
    
    // Llamar a la función utilizando el prototipo
    sumaHastaN(n); 
    
    return 0;
}

// Definición de la función
int sumaHastaN(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
        printf("%d\n", suma);
    }
    return suma;
}

