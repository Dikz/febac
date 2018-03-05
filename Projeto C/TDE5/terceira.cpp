#include<stdio.h>
#include<stdlib.h>

int main(){
    float salAtual = 0;
    float salReaj = 0;
    float salliq = 0;
    //char nome;
    
    //printf("Informe o nome: ");
    //scanf("%c", &nome);
    
    printf("Informe o salario atual: ");
    scanf("%f", &salAtual);
    
        if(salAtual < 1000){
            salReaj = (salAtual + (salAtual * 0.15));
            salliq = (salReaj - (salReaj * 0.08));
        }
        
        if(salAtual >= 1000 && salAtual <= 2000){
            salReaj = (salAtual + (salAtual * 0.10));
            salliq = (salReaj - (salReaj * 0.08));
        }
        
        if (salAtual >= 2001 && salAtual <= 3000){
           salReaj = (salAtual + (salAtual * 0.05));
           salliq = (salReaj - (salReaj * 0.08));
        }
        if(salAtual >= 3000) {
           salliq = (salReaj - (salReaj * 0.08));
        }
    
    printf("\n\tSalario Atual: %.2f \n\tReajuste: %.2f \n\tSalario Liquido: %.2f\n\n", salAtual, salReaj, salliq);
    system("pause");
}
