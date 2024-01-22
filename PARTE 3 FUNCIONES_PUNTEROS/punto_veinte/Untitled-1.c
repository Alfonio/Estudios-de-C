/*#include <stdio.h>

int main(){
int *p, a;
printf("Ingresa un numero\n");
scanf("%d",&a);
p = &a;
printf("%p apunta a %d",&p,a);

return 0;
}*/

/*
#include <stdio.h>

void duplicarNumero( int *p);

int main(){

int numero = 100;

duplicarNumero(&numero);

printf("Valor duplicado = %d\n", numero);
return 0;
}

void duplicarNumero( int *p){
*p *=2;
} */

/*#include <stdio.h>

void sumaresta(int a, int b, int *s, int *r);

int main() {
    int a, b;
    int s, r;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    sumaresta(a, b, &s, &r);

    printf("Valor de a+b es %d\t Valor de a-b es %d\n", s, r);
    return 0;
}

void sumaresta(int a, int b, int *s, int *r) {
    *s = a + b;
    *r = a - b;
}*/


#include <stdio.h>

void sumaresta(int a, int b, int *s, int *r);

int main() {
    int a = 30, b = 20;
    int s, r;

    sumaresta(a, b, &s, &r);

    printf("valor de a+b es %d\t valor de a-b es %d\n", s, r);
    return 0;
}

void sumaresta(int a, int b, int *s, int *r) {
    *s = a + b;
    *r = a - b;
}
