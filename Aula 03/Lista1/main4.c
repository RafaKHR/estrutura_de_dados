#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "conio2.h"


struct Contato {
    char nome[50];
    char telefone[15];
};


void adicionarContato(struct Contato agenda[], int *numContatos) {
    if (*numContatos < 100) {
        struct Contato novoContato;
        printf("Digite o nome do contato: ");
        scanf("%s", novoContato.nome);
        printf("Digite o número de telefone: ");
        scanf("%s", novoContato.telefone);

        agenda[*numContatos] = novoContato;
        (*numContatos)++;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("A agenda está cheia. Não é possível adicionar mais contatos.\n");
    }
}


void listarContatos(struct Contato agenda[], int numContatos) {
    printf("\nLista de contatos:\n");
    int i;
    for ( i = 0; i < numContatos; i++) {
        printf("Nome: %s | Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
    }
    printf("----------------------------------------------");
}

void buscarContato(struct Contato agenda[], int numContatos, char nomeBusca[]) {
	int i;
    for (i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            printf("Contato encontrado:\n");
            printf("Nome: %s | Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
            printf("----------------------------------------------");
            return;
        }
    }
    printf("Contato não encontrado, procure na lista ou adicione esse contato apertando (1).\n");
    printf("----------------------------------------------");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
    struct Contato agenda[100];
    int numContatos = 0;

    int opcao;
    char nomeBusca[50];

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Buscar contato pelo nome\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                adicionarContato(agenda, &numContatos);
                break;
            case 2:
                listarContatos(agenda, numContatos);
                break;
            case 3:
                printf("Digite o nome do contato a ser buscado: ");
                scanf("%s", nomeBusca);
                buscarContato(agenda, numContatos, nomeBusca);
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

