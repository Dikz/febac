#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;
    
    printf("Insira um valor: ");
    scanf("%d",&valor);
        
        if(valor >= 100 && valor <= 200){
                  printf("Voce digitou um numero na faixa de 100 a 200!\n\n");
        }
        else {
             printf("Voce digitou um numero fora da faixa de 100 a 200\n\n");     
        }
    
    system("pause");  
}
