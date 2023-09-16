#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


/* Eu falei com o Yugi */

void quick_sort(int *a, int left, int right);

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	int i, id, aux, vet[MAX] n, v[5];
	
	for(i=0; i<=4; i++){
		printf("Digite a sua idade [%d] = ", i+1);
		scanf("%d", &v[i]);
	}
	
	for(n=1; n<=4; n++){
		for(i=0; i<=4; i++){
			if(v[i] > v[i + 1]){
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				}
			}
		}
	for(i=0; i<=4; i++){
		printf("%d \t", v[i]);
	}
	
	
	for(id=0; id<MAX; id++){
		printf("Digite um valor: ");
		scanf("%d", &vet[id]);
	}
	
	quick_sort(vet, 0, MAX - 1);
	
	printf("\nValores ordenados\n");
	for(id=0; id<MAX; id++){
		printf("%d\t", vet[id]);
	}
}

void quick_sort(int *a, int left, int right){
	int  j, x, y;
	
	id = left;
	j = right;
	x = a[(left + right) / 2];
	
	while(id <= j){
		while(a[id] < x && id < right){
			id++;
		}
		while(a[j] > x && j > left){
			j--;
		}
		if(id <= j){
			y = a[id];
			a[id] = a[j];
			a[j] = y;
			id++;
			j--;
		}
	}
	
	if(j > left){
		quick_sort(a, left, j);
	}
	if(id < right){
		quick_sort(a, id, right);
	}
}
	return 0;
}


