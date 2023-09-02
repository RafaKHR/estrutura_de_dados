#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
                                       
/* Eu falei com o Yugi */

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	int i, n, v[5];
	char vc[5], aux;
	
	for(i=0; i<5; i++){
		printf("Digite uma letra [%d] = ", i+1);
		scanf("%c", &vc[i]);
		fflush(stdin);
	}
		
		
		
	for(i=0; i<=4; i++){
		printf("%d \t", v[i]);
	}
	
	return 0;
}
