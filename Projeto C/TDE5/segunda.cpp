#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, z;
    
    printf("Digite o valor de X: ");
    scanf("%d",&x); 
    
    printf("Digite o valor de Y: ");
    scanf("%d",&y);
    
    printf("Digite o valor de Z: ");
    scanf("%d",&z);
    
    //Triangulo
    if(x+y>z && x+z>y && y+z>x){
             printf("Forma um Triangulo\n");
    }
    //Triangulo Equilatero
    if(x+y==z && x+z==y && y+z==x){
             printf("Forma um Triangulo Equilatero\n");
    }
    //Triangulo Isoscelos
    if(x+y==z && x+z==y && y+z!=x){
             printf("Forma um Triangulo Isoscelos\n");
    }
    if(x+y != z && x+z != y && y+z != x){
              printf("Forma um Triangulo Escaleno\n");
    }
    else {
         printf("Nenhum!");     
    }
    
    system("pause");
}
