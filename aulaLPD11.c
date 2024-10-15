#include <stdio.h>
int main(){
    int folhas;
    int preco;
    

printf("informe o numero de folhas:");
    scanf("%d", &folhas);

    

    if (folhas <= 100){
        int total = (folhas * 0.25);
        printf ("%d", total);
}
    else if (folhas > 100){
        int total = (folhas * 0.20);
        printf ("%d", total); 
    }



    

    
 

  
}
