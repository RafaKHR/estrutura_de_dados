#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/* Falei com o Yugi */

struct cadastro_do_aluno{
	char nome[50];
	char disciplina[30];
	float nota_prova1;
	float nota_prova2;
	char matricula[10];
	char email[50];
	char telefone[16];
}; struct cadastro_do_aluno aluno;

struct cadastro_do_professor{
	char nome[50];
	char cpf[11];
	char matricula[10];
	char endereco[50];
}; struct cadastro_do_professor prof;

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	
	printf("\n---------- Cadastro de aluno ----------\n");
	printf("Nome do aluno: ");
	fflush(stdin);
	fgets(aluno.nome, 50, stdin);
	printf("Informe a disciplina: ");
	fflush(stdin);
	fgets(aluno.disciplina, 30, stdin);
	printf("Informe a 1° nota: ");
	scanf("%f", &aluno.nota_prova1);
	printf("Informe a 2° nota: ");
	scanf("%f", &aluno.nota_prova2);
	printf("Informe a matrícula do aluno: ");
	fflush(stdin);
	fgets(aluno.matricula, 10, stdin);
	printf("Informe o email do aluno: ");
	fflush(stdin);
	fgets(aluno.email, 50, stdin);
	printf("Informe o telefone do aluno: ");
	fflush(stdin);
	fgets(aluno.telefone, 16, stdin);
	
	printf("\n---------- Cadastro de professor ----------\n");
	printf("Informe o nome do professor: ");
	fflush(stdin);
	fgets(prof.nome, 50, stdin);
	printf("Informe o CPF do professor: ");
	fflush(stdin);
	fgets(prof.cpf, 11, stdin);
	printf("Informe a matrícula do professor: ");
	fflush(stdin);
	fgets(prof.matricula, 10, stdin);
	printf("Informe o endereço do professor: ");
	fflush(stdin);
	fgets(prof.endereco, 50, stdin);
	
	printf("\n---------- Lendo os dados da struct aluno ----------\n");
	printf("\nNome: %s", aluno.nome);
	printf("\nDisciplina: %s", aluno.disciplina);
	printf("\nNota da Prova 1: %.2f", aluno.nota_prova1);
	printf("\nNota da Prova 2: %.2f", aluno.nota_prova2);
	printf("\nMatrícula: %s", aluno.matricula);
	printf("\nEmail: %s", aluno.email);
	printf("\nTelefone: %s", aluno.telefone);
	
	printf("\n---------- Lendo os dados da struct professor ----------\n");
	printf("\nNome: %s", prof.nome);
	printf("\nCPF: %s", prof.cpf);
	printf("\nMatrícula: %s", prof.matricula);
	printf("\nEndereço: %s", prof.endereco);
	
	getch();
	return 0;
}
