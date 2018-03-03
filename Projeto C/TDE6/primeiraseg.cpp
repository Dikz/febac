#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;
    
    do{
        printf("Insira um valor: ");
        scanf("%d",&valor);
        if(valor >= 5){
                 printf("Entrada Invalida\n");
        }
        else {
             printf("Tudo OK... Voce digitou %d\n\n",valor);
             system("pause");     
        }
    }
    
    while(valor >=5);
    return 0;
}
