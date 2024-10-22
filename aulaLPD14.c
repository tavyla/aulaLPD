#include <stdio.h>
int main(){

int operacao;

printf ("informe a operacao:");
scanf ("%d", &operacao);

if (operacao == 1){
    printf("ver saldo");
}

if (operacao == 2){
    printf ("ver extrato");
}

if (operacao == 3){
    printf ("saque");
}

if (operacao == 4){
 printf ("sair");   
}

}