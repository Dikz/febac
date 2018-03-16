#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;

    do{
        printf("Insira um valor: ");
        scanf("%d",&valor);
        if(valor >= 5){
                 printf("\n>>Entrada Invalida\n");
        }
        else {
             printf("\n\tTudo OK... Voce digitou o numero %d\n\n\n",valor);
        }
    }

    while(valor >=5);
    system("pause");
}
