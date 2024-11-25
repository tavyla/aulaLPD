#include<stdio.h>
int main(){

int a;
int b;
int c;
int el;
int i;
char voto;

printf("eleitores:");
scanf("%d", &el);
for(i=1; i<=el; i++){
    printf("infome seu voto:");
    scanf("%c", &voto);
    scanf("%c", &voto);
    if(voto=='a'){
        a++;
    }
    else if(voto=='b'){
        b++;
    }
    else if(voto==c){
        c++;
    }

     printf("%c", &voto);
}

printf("A %d\n votos", a);
printf("B %d\n votos", b);
printf("C %d\n votos", c);

}