#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>

/* Falei com o Yugi */

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	int i, n, vet[5];
	
	srand(time(NULL));
	for(i=0; i<5; i++){
		vet[i]=rand() % 100;
	}
	
	for(i=0; i<5; i++){
		printf("%d\t", vet[i]);
	}
	
	printf("\n\nQual é o valor que deseja buscar? ");
	scanf("%d", &n);
		
	
	for(i=0; i<5; i++){
		if(vet[i]==n){
			printf("\n%d ocorre na posição %d do vetor.\n", n, i);
		}
	}
	
	return 0;
}
