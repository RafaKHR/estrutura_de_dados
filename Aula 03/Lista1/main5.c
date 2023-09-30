#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "conio2.h"

struct livro {
    char titulo[50];
    char autor[15];
    char ano[10];
};

void adicionarLivro(struct livro agenda[], int *numLivros) {
    if (*numLivros < 100) {
        struct livro novoLivro;
        printf("Digite o nome do livro:(sem espaço ex:SherlockHolmes) ");
        scanf("%s", novoLivro.titulo);
        
        printf("Digite o autor do livro: ");
        scanf("%s", novoLivro.autor);
        
        printf("Digite o ano de lançamento do livro: ");
        scanf("%s", novoLivro.ano);

        agenda[*numLivros] = novoLivro;
        (*numLivros)++;
        printf("Livro adicionado com sucesso!\n");
    } else {
        printf("A biblioteca está cheia. Não é possível adicionar mais livros.\n");
    }
}

void listarLivros(struct livro agenda[], int numLivros) {
    printf("Lista de livros:\n");
    int i;
    for (i = 0; i < numLivros; i++) {
        printf("Nome do livro: %s | Nome do autor: %s | Ano da publicação: %s\n",
               agenda[i].titulo, agenda[i].autor, agenda[i].ano);
    }
    printf("----------------------------------------------\n");
}

void buscarLivro(struct livro agenda[], int numLivros, char livroBusca[]) {
	int i;
    for ( i = 0; i < numLivros; i++) {
        if (strcmp(agenda[i].autor, livroBusca) == 0) {
            printf("\nLivro encontrado:\n");
            printf("Nome do livro: %s | Nome do autor: %s | Ano da publicação: %s\n",
                   agenda[i].titulo, agenda[i].autor, agenda[i].ano);
            printf("----------------------------------------------\n");
            return;
        }
    }
    printf("Livro não encontrado, procure na lista ou adicione esse livro.\n");
    printf("----------------------------------------------\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color 5e");
    struct livro agenda[100];
    int numLivros = 0;

    int opcao;
    char livroBusca[50];

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar livro\n");
        printf("2. Listar livros\n");
        printf("3. Buscar livro pelo autor\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        fflush(stdin);
        system("cls");
        
        switch (opcao) {
            case 1:
                adicionarLivro(agenda, &numLivros);
                break;
            case 2:
                listarLivros(agenda, numLivros);
                break;
            case 3:
                printf("Digite o nome do autor a ser buscado: ");
                scanf("%s", livroBusca);
                buscarLivro(agenda, numLivros, livroBusca);
                break;
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Escolha uma opção válida do menu.\n");
        }
    } while (opcao != 4);

    return 0;
}

