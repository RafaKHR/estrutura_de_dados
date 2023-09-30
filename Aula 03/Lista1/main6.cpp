#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include <string.h>
#include <locale.h>
#define qtd 3
    
struct Estudante {
    char nome[50];
    int matricula[15];
    float n1;
    float n2;
    float media;
    char diciplina[50];
}aluno[qtd];struct Estudante alunos[5];
    
    
void DadosAlunos() {
    int i;
	
	for (i = 0; i < 3; i++) {
        printf("\n--- %d° Diciplina ---\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Numero da matricula: %d\n", alunos[i].matricula);
        printf("Nome da diciplina: %s\n", alunos[i].diciplina);
        printf("Nota A1: %.2f\n", alunos[i].n1);
        printf("Nota A2: %.2f\n", alunos[i].n2);
        alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2;
    	printf("Media final %.2f\n", alunos[i].media);
        if (alunos[i].media >= 7 ) {
        	textcolor(2);
        	printf("aluno(a) teve a media necessaria!\n");
        	textcolor(7);
    	}else{
    		textcolor(4);
        	printf("aluno(a) nao alcancou a media .\n");
        	textcolor(7);
			}
	} 
}
    
    
int main() {
		setlocale(LC_ALL, "Portuguese");
		system("color 5e");
        printf("=== Cadastro de Alunos ===\n");
        int i;
        for ( i = 0; i < 3; i++) { 
    
        	printf("\n\nNome do aluno: ");
            scanf("%s", alunos[i].nome);
            
            printf("Numero da matricula: ");
            scanf("%d", &alunos[i].matricula);
        
        	printf("Diciplina: ");
            scanf("%s", alunos[i].diciplina);
        
            printf("Nota A1: ");
            scanf("%f", &alunos[i].n1);
    
            printf("Nota A2: ");
            scanf("%f", &alunos[i].n2);
            
        }
        
        system("cls");
    
        printf("\n=== Dados dos Alunos ===\n");
        
        
        DadosAlunos();
    
        return 0;
    }
