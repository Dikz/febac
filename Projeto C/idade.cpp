#include<stdio.h>
#include<stdlib.h>

int main(){
    int atual, nasc, idade;
    
    printf("Qual o ano atual? ");
    scanf("%d",&atual);
    printf("\nMuito bem, agora qual foi o ano que nasceu? ");
    scanf("%d",&nasc);
    idade = (atual-nasc);
    printf("\nVoce tem %d ",idade);
    system("pause");
}
