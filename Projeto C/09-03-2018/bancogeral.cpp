#include<stdio.h>
#include<stdlib.h>

int main () {
    int op;
    float saldoAtual = 5000, valSaque=0, valDeposito=0;
    
    printf("1 - SACAR\n");
    printf("2 - DEPOSITAR\n");    
    printf("3 - VER SALDO\n");
    printf("4 - SAIR\n");
    printf("Escolha uma Operacao:  ");
    scanf("%d",&op);
    
        switch(op){
          case 1: printf("Digite o valor do saque: ");
          scanf("%f",&valSaque);
            saldoAtual = (saldoAtual - valSaque);
            printf("Saldo Atual: %.2f\n\n",saldoAtual);
          break;
          
          case 2: printf("\t\n - Opcao de Depositar\n - Digite o valor do Deposito: ");
                  scanf("%f",&valDeposito);
                    saldoAtual = (saldoAtual + valDeposito);
                    printf("Seu novo saldo: %.2f\n\n",saldoAtual);                  
          break;
          
          case 3: printf(" Opcao Ver Saldo\n Seu Saldo Atual: %.2f\n",saldoAtual);
          break;
          
          case 4: printf("Sair do Sistema\n");
          break;
          
          default: printf("Opcao Invalida!\n");
        }
    
    system("pause");
}
