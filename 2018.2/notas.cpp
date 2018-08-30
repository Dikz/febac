#include <stdio.h>
#include <stdlib.h>

int main(){
	float vetor[5];
	float maior=0, menor;

	/*
		O menor se inicia com indice 0, para pegar o primeiro valor e tornar como menor.
		Sendo assim qualquer numero menor que o primeiro digitado será o novo numero menor.
	*/
	menor = vetor[0];

	printf("Entre com 5 notas ...\n\n");

	for(int i=0; i < 5; i++){

		//Entre com as notas
		printf("Entre com uma nota: ");
		scanf("%f", &vetor[i]);

		//Verifica se o numero digitado é maior o maior digitado até agora, se for então ele atribui
		//o numero digitado como o novo maior numero
		if(vetor[i] > maior){
			maior = vetor[i];
		}

		//Se o numero digitado for menor que o atual numero menor, então esse valor digitado é atribuido
		//como novo numero menor
		if(vetor[i] < menor){
			menor = vetor[i];
		}

	}


	//Por fim apenas é exibido o numero maior e o menor
	printf("\n\nA maior nota eh: %.2f\n", maior);
	printf("A menor nota eh: %.2f\n", menor);



	return(0);
}