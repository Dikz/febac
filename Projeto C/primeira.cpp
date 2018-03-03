#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    
    printf("Insira um numero de 1 á 4: ");
    scanf("%d",&num);
    
    if(num <= 4){
         printf("Tudo OK!\n\n");
    }
    else {
         printf("Entrada Invalida!\n");
         
         printf("Insira novamente um numero de 1 á 4: ");
         scanf("%d",&num);
         
         if(num <= 4){
         printf("Tudo OK!\n\n");
         }
    }
    
    system("pause");
}
