#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#define MAX_SIZE 100

/* Eu falei com o Yugi */

void inserirOrdenado(int lista[], int *tamanho, int elemento){
	int i, j;
	
	if(*tamanho >= MAX_SIZE){
		printf("A lista está cheia. Não é possível inserir mais elementos. \n");
		return;
	}
	
	for(i=0; i< *tamanho; i++){
		if(elemento < lista[i]){
			for(j = *tamanho; j > i; j--){
				lista[j] = lista[j -1];
			} break;
		}
	}
	
	lista[i] = elemento;
	(*tamanho)++;
}

int main(){
	int lista[MAX_SIZE];
	int tamanho = 0;
	int i;
	
	inserirOrdenado(lista, &tamanho, 3);
	inserirOrdenado(lista, &tamanho, 8);
	inserirOrdenado(lista, &tamanho, 4);
	inserirOrdenado(lista, &tamanho, 2);
	inserirOrdenado(lista, &tamanho, 5);
	
	printf("Lista ordenada: ");
	for(i=0; i < tamanho; i++){
		printf("%d ", lista[i]);
	}
	printf("\n");
	return 0;
}
