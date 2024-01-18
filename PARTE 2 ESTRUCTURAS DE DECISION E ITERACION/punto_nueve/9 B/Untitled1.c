#include <stdio.h>
/*Ingresa N caracteres y determinar y mostrar la cantidad de
vocales indicando si la A es la vocal que mas veces aparecio
*/
int main(){
char caracter; int cantidad = 0,contA ,contE,contI, contO, contU , cont_no_vocal ;
    contA = contE = contI = contO = contU = cont_no_vocal = 0;
    printf("Ingresa la cantidad de letras que quieras: ");
     scanf("%d",&cantidad);
     for (int i=0; i<cantidad; i++){
        printf("Ingresa un caracter");
        fflush(stdin); // fflush(stdin) SE UTILIZA PARA LIMPIAR LA MEMORIA DEL BUFFER Y NO SE REPITA/ALMACENE CODIGO
         scanf("%c", &caracter);
        switch(caracter){
           case 'A':
            contA++;
                break;

           case 'E':
            contE++;
                break;

           case 'I':
            contI++;
                break;

           case 'O':
            contO++;
                break;

           case 'U':
            contU++;
                break;
    default:
          cont_no_vocal++;
         }//SWITCH


     } //FOR
    printf("La cantidad de A: %d\n",contA);
    printf("La cantidad de E: %d\n",contE);
    printf("La cantidad de I: %d\n",contI);
    printf("La cantidad de O: %d\n",contO);
    printf("La cantidad de U: %d\n",contU);
    printf("La cantidad de No-Vocales: %d\n", cont_no_vocal);

 // Determinar si 'A' es la vocal que apareció más veces.
    if (contA >= contE && contA >= contI && contA >= contO && contA >= contU) {
        printf("La vocal 'A' es la que apareció más veces.\n");
    } else {
        printf("La vocal 'A' no es la que apareció más veces.\n");
    }
return 0;
}
