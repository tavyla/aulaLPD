#include<stdio.h>
int main(){

int n, r, s, d;
s=0;

printf("conta:");
scanf("%d", &n);

while (n>0){
    r= n%10;
    n= n/10;
    s= r+s;
}

d= s%1;
printf("digito %d", d);


}