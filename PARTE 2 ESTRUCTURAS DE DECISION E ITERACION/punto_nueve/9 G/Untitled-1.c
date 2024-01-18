/*Leer a, b y c coeficientes de una ecuación cuadrática (ax2+bx+c). Determinar si tiene raíces 
reales o imaginarias (b2-4ac < 0).*/

#include <stdio.h>

int main(){
float a,b,c,discriminante;

printf("Ingresa 3 variables numericas:");
scanf("%f %f %f",&a,&b,&c);
discriminante = (float)(b*2-4*a*c < 0);
//hago un switch donde con un operador condicional donde si el descriminante es > 0 = 1 que es un dato unico
//Si no es 1 que son los reales, entonces es -1 que es imaginario y sino es 0
 switch ((discriminante > 0) ? 1 : (discriminante < 0) ? -1 : 0) {
        case 1:
            printf("El discriminante es mayor que cero, por lo tanto, las raíces son reales y diferentes.\n");
            break;
        case -1:
            printf("El discriminante es menor que cero, por lo tanto, las raíces son imaginarias.\n");
            break;
        case 0:
            printf("El discriminante es igual a cero, por lo tanto, la ecuación tiene una raíz real repetida.\n");
            break;
    }

    return 0;
}