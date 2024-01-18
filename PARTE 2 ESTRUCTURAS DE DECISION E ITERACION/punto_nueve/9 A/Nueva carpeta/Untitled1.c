//Punto 9 A
#include <stdio.h>
//ingresar N numeros enteros y calcular y mostrar el promedio de los positivos

int main(){
   int cantidad,num,suma;
    printf("Cuantos numeros quiere ingresar:\n");
     scanf("%d",&cantidad);
 for (int i=1; i<=cantidad; i++){
    printf("Ingresa un numero para la sumatoria:\n");
      scanf("%d",&num);
      if (num > 0) {
        suma+= num;
      }

 }
 printf("El promedio de la suma es:%2.2f\n",(float)suma/cantidad);
//Hay que castearlo porque suma y cantidad son 2 enteros y va a a dar un entero
return 0;
}
