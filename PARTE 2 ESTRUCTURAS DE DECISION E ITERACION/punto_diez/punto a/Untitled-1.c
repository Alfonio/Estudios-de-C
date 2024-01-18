//10) Transformar las siguientes sentencias utilizando la instrucción switch (x es int, F es char).
/*if (x == 4)
 y = 7;
else 
 if (x == 5)
 y = 9;
 else 
 if(x == 9)
 y = 14;
 else 
 y = 22;*/

#include <stdio.h>

int main() {
    int x, y;

    printf("Ingresa un valor para saber cuanto vale Y segun X (4, 5, 9 o otro numero): ");
    scanf("%d", &x);
    
    switch (x) {
        case 4:
            y = 7;
            printf("y vale: %d\n", y);
            break;
        case 5:
            y = 9;
            printf("y vale: %d\n", y);
            break;
        case 9:
            y = 14;
            printf("y vale: %d\n", y);
            break;
        default:
            y = 22;
            printf("y vale: %d\n", y);
    }

    return 0;
}