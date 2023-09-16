#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


/* Eu falei com o Yugi */

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	int i, aux, n, v[5];
	
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
	
	return 0;
}
