#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

/* O Yugi falou comigo */

typedef struct{
	char Titulo[50];
	int Classificacao;
	char Diretor[50];
	char Genero[50];
	char Duracao[50];
}Filme;

void setFilme(int classificacao, const char *titulo, const char *diretor, const char *duracao, const char *genero){
	Filme F;
	F.Classificacao = classificacao;
	strcpy(F.Titulo, titulo);
	strcpy(F.Diretor, diretor);
	strcpy(F.Genero, genero);
	strcpy(F.Duracao, duracao);
};

void imprimeFilme(Filme F){
	printf("Título do filme: %s \nClassificação do filme: %d \nDiretor do filme: %s \nGênero do filme: %s \nDuração do filme: %s", F.Classificacao, F.Titulo, F.Diretor, F.Duracao, F.Genero);
};

int main(void){
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	Filme Corra;
	Corra = setFilme(14, "Corra", "1 hora e 44 minutos", "Jordan Peele", "Terror");
	imprimeFilme(Corra);
	return 0;
}
