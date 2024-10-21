#include <stdio.h>
int main(){

    char s;
    char c;
    char v;
    char d;
    char situacao;

    printf ("informe sua situacao:");
    scanf ("%c", &situacao);

    if (situacao == 's'){
    printf ("solteiro(a)");
    }

    if (situacao == 'c'){
     printf ("casado(a)");
    }
     
   if (situacao == 'v'){
    printf ("viuvo(a)");
   }
    
    if (situacao == 'd'){
    printf ("divorciado(a)");
    }

}