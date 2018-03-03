#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    float base, h, area;
    //Inicio
    printf("Calculo Retangulo\n");
    printf("_________________\n");
    printf("Informe a base:");
    scanf("%f",&base);
    printf("Informe a altura:");
    scanf("%f",&h);
    area =(base * h);
    printf("Resultado da area %.2f \n\n", area);
    printf("___________________\n");
    system("pause");
}
