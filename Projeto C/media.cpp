#include<stdio.h>
#include<stdlib.h>

//Media do Aluno
int main(){
   float nota1, nota2, nota3, media, lfaltas, provafinal, mfinal;
   
   printf("Informe a primeira nota: ");
   scanf("%f",&nota1);
   
   printf("Informe a segunda nota: ");
   scanf("%f",&nota2);
   
   printf("Informe a terceira nota: ");
   scanf("%f",&nota3);
   
   printf("Quantas faltas teve? ");
   scanf("%f",&lfaltas);
   //Calculo da Media
   media = ((nota1+nota2+nota3)/3);
         //Condicional
         if(media < 4)
         {
                  printf("Reprovado - %.2f\n\n", media);
         }
         
         if(media >=4 && media < 7)
         {
                  printf("Exame Final - %.2f\n\n", media);
                  printf("Qual foi a nota da prova final? ");
                  scanf("%f",&provafinal);
                  mfinal = ((media+provafinal)/2);
                  if(mfinal >= 6){
                            printf("Você passou no exame final com %.0f \n", mfinal);         
                  }
                  if(mfinal < 6){
                            printf("Você reprovou no exame final, acabou vai estudar novamente! Com nota: %.0f \n", mfinal);          
                  }
         }
         
         if(media >= 7)
         {
                  printf("Aprovado por nota - %.2f\n\n", media);
                  
         }
         
         //Verifica Faltas
         if(lfaltas < 20){
                    printf("E tambem foi aprovado por faltas com %.0f faltas.\n\n",lfaltas);
                           
         }
         if(lfaltas >= 20){
                    printf("Mas foi reprovado por faltas com %.0f faltas.\n\n",lfaltas);
                    
         }

system("pause");
}
