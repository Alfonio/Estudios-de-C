/*
11 – Detectar y corregir los errores de los siguientes fragmentos de código:
a) mostrar los números naturales divisibles por 5 y menores a 25
#define N 50
int i;
 for(i = 5; i <= N; i+=5);
 printf(“%d”, &i);
*/
#include <stdio.h>
#define N 50
int main(){
   
//declaro el int i adentro del for y saco el & porque no es necesario, aparte de las "" en “%d”
 for(int i = 5; i <=N; i+=5){
  printf("%d\n", i);
 }
}