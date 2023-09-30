#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
    struct Pessoa pessoa1;

 
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite a altura da pessoa (Ex:1.80): ");
    scanf("%f", &pessoa1.altura);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f metros\n", pessoa1.altura);

    return 0;
}

