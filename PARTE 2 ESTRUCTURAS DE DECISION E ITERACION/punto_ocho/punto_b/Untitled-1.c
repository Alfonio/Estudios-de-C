#include <stdio.h>

#define n 5

int main(){

int suma, i;    

for (i=1; i<n; i+=2 ) {
 suma += i;
 printf("%d -> %d\n", i,suma);
}
    
return 0; 

//Resultado ===>  1 -> 1
//          ===>  3 -> 4


/*El bucle for se ejecuta dos veces:

En la primera iteración, i es 1, se suma a suma, que se inicializa en 0, y suma se convierte en 1. Luego, imprime "1 -> 1".
En la segunda iteración, i se incrementa en 2 unidades a 3, se suma a suma, que ahora es 1, y 
suma se convierte en 4. Luego,imprime "3 -> 4".
Después de la segunda iteración, el bucle se detiene porque i ya no es menor que n.
Por lo tanto, el resultado final es "1 -> 1" y "3 -> 4".*/
}