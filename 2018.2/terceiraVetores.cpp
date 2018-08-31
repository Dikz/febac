#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
Funções: Preencher Vetor, Imprimir Vetor, Imprimir Quadrado, Imprimir primeiro e ultimo elemento.
*/

int preencher(int vetor[], int size){
	printf("# Preenchimento de Vetor #\n\n");
	sleep(1);
	for(int i=0; i < size; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
	}
	sleep(1);
}

int imprimir(int vetor[], int size){
	printf("\n# Imprimindo Vetor #\n");
	sleep(1);
	for(int i=0; i < size; i++){
		printf("\t%d\n", vetor[i]);
	}
	printf("// Fim da impressao do vetor!\n\n");
	sleep(1);
}

int imprimirQuadrado(int vetor[], int size){
	printf(">> # Imprimindo Quadrado do Vetor #\n");
	sleep(1);
	for(int i=0; i < size; i++){
		printf("\t%d\n", vetor[i] * 2);
	}
	sleep(1);
}

int impPrimeiro(int vetor[], int size){
	printf("\n>> # Primeiro elemento: %d\n", vetor[0]);
	sleep(1);
}

int impUltimo(int vetor[], int size){
	printf("\n>> # Ultimo elemento: %d\n", vetor[size-1]);
	sleep(1);
}

int main(){
int vet[4];
	preencher(vet, 4);
	imprimir(vet, 4);
	imprimirQuadrado(vet, 4);
	impPrimeiro(vet, 4);
	impUltimo(vet, 4);

	return(0);
}