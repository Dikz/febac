#include<stdio.h>
#include<stdlib.h>

int main(){
    int senha=0, cont=0;
    
    printf("ENTRE COM SUA SENHA: ");
    scanf("%d",&senha);
    
       while(senha != 123){
         printf("Digite sua senha novamente: ");
         scanf("%d",&senha);
         cont = cont +1;
         
           if(cont == 3 && senha != 123){
                   printf("Senha Bloqueada.\n\n");
                   break;     
           }            
       }    
       
       if(senha == 123){
                printf("Acessado com sucesso!\n\n");
                printf("Quandidade de loops: %d\n\n",cont);         
       }
       system("pause");
}
