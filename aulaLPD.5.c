#include <stdio.h>
int main(){
    float quilometros;
    float  litros;
    printf("informe os quilometros:");
    scanf("%f", &quilometros);
    //printf("%f", quilometros);


    printf("informe a quantidade de litros:");
    scanf("%f", &litros);


   float consumo = quilometros / litros;
   printf ("%f", consumo);

}
