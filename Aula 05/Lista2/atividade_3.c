#include <stdio.h>
#include <stdlib.h>
#define MAX 4
#include <locale.h>
#include <conio.h>

void insertion_sort(int *a);

int main(int argc, char** argv){
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	int i, vet[MAX];
	
	for(i=0; i<MAX; i++){
		printf("Digite um valor: ");
		scanf("%d", &vet[i]);
	}
	
	insertion_sort(vet);
	
	printf("\nValores Ordenados\n");
	for(i=0; i<MAX; i++){
		printf("%d\t", vet[i]);
	}
	
	void insertion_sort(int *a){
		int i, j, tmp;
		
		for(i=1; i<MAX; i++){
			tmp = a[i];
			for(j = i-1; j > = 0 && tmp < a[j]; j--){
				a[j+1] = a[j];
			}
			a[j+1] = tmp;
		}
	}	
}
