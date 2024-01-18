//10) Transformar las siguientes sentencias utilizando la instrucción switch (x es int, F es char).
/*if (F == ’s’ || F == ’S’)
 r = x + y;
else 
 ff (F == ’r’ || F == ’R’)
 r = x - y; 
 else 
 if (F == ’m’ || F == ’M’)
 r = x * y;
 else 
 if (F == ’d’ || F == ’D’)
 y = x/y;
 else 
 y = 0;*/
#include <stdio.h>

 int main(){
    
switch (F) {
    case 's':
    case 'S':
        r = x + y;
        break;
    case 'r':
    case 'R':
        r = x - y;
        break;
    case 'm':
    case 'M':
        r = x * y;
        break;
    case 'd':
    case 'D':
        if (y != 0) {
            r = x / y;
        } else {
            y = 0; // En caso de división por cero, puedes manejarlo como desees.
        }
        break;
    default:
        y = 0;
}
 }