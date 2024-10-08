#include <stdio.h>
int main(){
    float comprimento;
    float largura;
    float  preco;
    printf("informe o comprimento da sala:");
    scanf("%f", &comprimento);
    //printf("%f", comprimento);

    printf("informe a largura da sala:");
    scanf("%f", &largura);
    //printf("%f", largura);


    printf("informe o preco do metro:");
    scanf("%f", &preco);


   float custo = (comprimento * largura) * preco;
   printf ("%f", custo);

}
