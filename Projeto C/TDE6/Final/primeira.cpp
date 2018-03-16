#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;

    printf("Insira um valor: ");
    scanf("%d",&valor);
    
    while(valor >=5){
        printf("\n>>Entrada Invalida\n");
        printf("Insira um corretamente: ");
        scanf("%d",&valor);

    }
    
    if(valor <= 4) {
        printf("\n\tTudo OK... Voce digitou o numero %d\n\n\n",valor);
    }
    system("pause");
}
