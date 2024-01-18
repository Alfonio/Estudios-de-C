#include <stdio.h>

#define n 5

int main(){

int suma, i;    

suma = 0;
    for (i=1; i<=n; i ++){
      suma += i;
        printf("%d\n", suma);
    } 
return 0; 
//Obtiene los valores de 1, 3, 6, 10, 15.

/* El bucle for se ejecuta 5 veces (desde i = 1 hasta i <= 5), y en cada iteración,
 suma se incrementa por el valor actual de i. Por lo tanto, obtienes la suma acumulativa 
de los números del 1 al 5, y se imprime después de cada incremento en suma.*/ 
}
