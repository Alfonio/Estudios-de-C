#include <stdio.h>

#define n 5

int main(){

int suma, i;    

for (suma = 1,i=n; i>0; i-- ) {
 suma *= i;
 printf("%d -> %d\n", i, suma);
 }
 
return 0; 
/*
Resultado ==> 5 -> 5
              4 -> 20
              3 -> 60
              2 -> 120
              1 -> 120
*/
/*
El bucle for se ejecuta cinco veces, comenzando con i en 5 (como se define en #define n 5) y suma en 1. 
En cada iteración, suma se multiplica por el valor actual de i, y luego i se decrementa en 1.
Esto da como resultado la acumulación de productos sucesivos de i en suma.

Después de la última iteración, cuando i es 1, se imprime "1 -> 120", y 
luego el bucle se detiene porque la condición i > 0 ya no se cumple.
*/
}