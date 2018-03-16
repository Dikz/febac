#include<stdio.h>
#include<stdlib.h>

int main(){
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
       }
       system("pause");
}
