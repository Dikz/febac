#include<stdio.h>
#include<stdlib.h>

int main () {
    int op;
    
    printf("1 - SACAR\n");
    printf("2 - DEPOSITAR\n");    
    printf("3 - VER SALDO\n");
    printf("4 - SAIR\n");
    printf("Escolha uma Operacao:  ");
    scanf("%d",&op);
    
        switch(op){
          case 1: printf("Opcao Sacar");
          break;
          
          case 2: printf("Opcao de Depositar\n");                   
          break;
          
          case 3: printf("Opcao de Ver Saldo\n");
          break;
          
          case 4: printf("Sair do Sistema\n");
          break;
          
          default: printf("Opcao Invalida!\n");
        }
    
    system("pause");
}
