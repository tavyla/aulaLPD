#include<stdio.h>
int main(){

int x, y, t;
t=1;

printf("qual o valor de x:");
scanf("%d", &x);

printf("qual o valor de y:");
scanf("%d", &y);

while (t%x!=0 || t%y!=0){
   t++;
}

printf("alarme = %d\n", t);

}