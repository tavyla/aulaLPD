#include<stdio.h>

int main(){
float nota1;
float nota2;
float nota3;
float nota4;

printf("informe a nota do primeiro bimestre:");
scanf("%f", &nota1);

printf("informe a nota do segundo bimestre:");
scanf("%f", &nota2);

printf("informe a nota do terceiro bimestre:");
scanf("%f", &nota3);

printf("informe a nota do quarto bimestre:");
scanf("%f", &nota4);

float media = (nota1 + nota2 + nota3 + nota4)/4;
printf("%f\n", media);

if (media >= 7){
    printf ("aprovado!");
}

else if (media >= 4){
    printf("vai para o exame final");
}
else if(media <4){
    printf("reprovado");
}


}