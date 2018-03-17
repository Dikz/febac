#include <stdio.h>
#include <stdlib.h>

int main(){
    int voto, lCont=0, gCont=0, cCont=0, fCont=0, nCont=0;
    int bCont=0, resp;

    do {
        printf("1 - Luiz\n");
        printf("2 - Gomes\n");
        printf("3 - Carlos\n");
        printf("4 - Fellipe\n");
        printf("5 - Nulo\n");
        printf("6 - Branco\n");
        //printf("0 - Encerra\n");

        printf("\t\nDigite a Opcao: ");
        scanf("%d",&voto);

        switch(voto){
            case 0: break;

            case 1: lCont++;
                    break;

            case 2: gCont++;
                    break;

            case 3: cCont++;
                    break;

            case 4: fCont++;
                    break;

            case 5: nCont++;
                    break;

            case 6: bCont++;
                    break;

            default: printf("Invalido!");
        }

    printf("Deseja votar novamente? [1] Sim ou [0] Encerrar : ");
    scanf("%d",&resp);
    system("clear");
    }

    while(resp == 1);

    printf("\n\t#Resultado dos Votos#\n");
    printf("\tQuantidade de votos do Luiz: %d\n",lCont);
    printf("\tQuantidade de votos do Gomes: %d\n",gCont);
    printf("\tQuantidade de votos do Carlos: %d\n",cCont);
    printf("\tQuantidade de votos do Fellipe: %d\n",fCont);
    printf("\tQuantidade de votos Nulo: %d\n",nCont);
    printf("\tQuantidade de votos em Branco: %d\n",bCont);

system("pause");
}
