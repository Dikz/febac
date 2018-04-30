#include <stdio.h>
#include <stdlib.h>
    float saldoAtual = 2000;
    float valSaque=0, valDeposito=0;

    float sacar(float xvalor){
        return saldoAtual = (saldoAtual - xvalor);
    }

    float depositar(float yvalor){
        return saldoAtual = (saldoAtual + yvalor);
    }

    void verSaldo(){
        printf("\n\nSeu saldo atual eh - %.2f\n\n", saldoAtual);
    }

    void menu(){
        int op;
        int resp;

        do{
        printf("1 - Saque\n");
        printf("2 - Deposito\n");
        printf("3 - Ver Saldo\n");
        printf("4 - Sair\n\n");
        printf("Digite sua opcao: ");
        scanf("%d",&op);

        switch(op){
            case 1: printf("Digite o valor do saque: ");
                    scanf("%f", &valSaque);
                    sacar(valSaque);
            break;

            case 2: printf("Digite o valor de deposito: ");
                    scanf("%f", &valDeposito);
                    depositar(valDeposito);
            break;

            case 3: printf("Seu saldo atual: %.2f\n\n", saldoAtual);
            break;

            case 4:
            break;

            default: printf("Opcao Invalida!\n");
        }

        printf("Deseja continuar a operacao 1 [SIM] - 2 [NAO]: ");
        scanf("%d",&resp);
        system("cls");
    }

    while(resp == 1);
    }

    void logar(){
        int senha=0, cont=0;

        printf("\t@FEBAC - Bank\n\t_____________\n\n");
        printf("\tENTRE COM SUA SENHA: ");
        scanf("%d",&senha);

        while(senha != 123){
             printf("\n>>Digite sua senha novamente: ");
             scanf("%d",&senha);
             cont = cont +1;

           if(cont == 3 && senha != 123){
               printf("\n\t----------------\n\tSenha Bloqueada.\n\t----------------\n\n\n");
               break;
           }
       }

       if(senha == 123){
            printf("\n\t----------------------\n\t# Acessado com sucesso!\n\t----------------------\n\n");
            printf("Quandidade de tentativas(loops): %d\n\n",cont);
            menu();
       }


    }



int main(){

    //Pratica de Sexta-Feira : dia 27 de abril de 2018

    logar();


    system("pause");
}


