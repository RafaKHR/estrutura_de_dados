#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


struct tipo {
    char letra[1];
    int valor;
    float pontoFlutuante;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
    struct tipo meutipo;
    
    meutipo.pontoFlutuante = 3.14;

    printf("Digite uma letra: ");
    scanf("%s", meutipo.letra);

    printf("Digite um numero inteiro: ");
    scanf("%d", &meutipo.valor);
    
    printf("Digite um numero flutuante:\n");
    printf("(Ex:32,864 ou com essa estrutura xx,yyyy): ");
    scanf("%f", &meutipo.pontoFlutuante);


    printf("\nDados da pessoa:\n");
    printf("letra: %s\n", meutipo.letra);
    printf("Numero Inteiro: %d \n", meutipo.valor);
    printf("Valor Flutuante: %.2f\n", meutipo.pontoFlutuante);

    return 0;
}

