#include<stdio.h>
#include<stdlib.h>

int main(){
    int cod, qtd; //%d
    float vtotal; //%f
    
    printf("Digite o Codigo: ");
    scanf("%d",cod);
    
    printf("Digite a Quantidade: ");
    scanf("%d",qtd);
    
    if(cod == 100){
           vtotal(qtd * 1.20);
           printf("\tCachorro Quente \n Sua conta total é: %.f2");
    }
    
    
    system("pause");    
}
