#include <stdio.h>
int main(){
    float bits;
    float  velocidade;
    printf("informe a quantidade de bits do arquivo:");
    scanf("%f", &bits);
    //printf("%f", bits);


    printf("informe a velocidade da conexao:");
    scanf("%f", &velocidade);


   float tempo = bits / velocidade;
   printf ("%f", tempo);

}
