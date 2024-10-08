#include <stdio.h>
int main(){
    float altura;
    float  peso;
    printf("informe sua altura:");
    scanf("%f", &altura);
    //printf("%f", altura);


    printf("informe seu peso:");
    scanf("%f", &peso);

   float imc = peso / (altura*altura);
   printf ("%f", imc);

}
