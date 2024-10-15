#include <stdio.h>
int main(){

    int pecasDefeituosas;
    int pecasProduzidas;

 printf("informe o numero de pecas defeituosas:");
 scanf("%d", &pecasDefeituosas);

 printf("informe o total de pecas produzidas:");
 scanf("%d", &pecasProduzidas);

 int total = (pecasDefeituosas * pecasProduzidas)/100;

 if (pecasDefeituosas > (pecasProduzidas * 0.1)/100){
printf ("precisa de manutencao");
 }

else if (pecasDefeituosas < (pecasProduzidas * 0.1)/100){
printf("nao precisa de manutencao");
}












}