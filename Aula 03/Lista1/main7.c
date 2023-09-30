#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include "conio2.h"

struct ContaBancaria {
    char nomeTitular[50];
    int numeroConta;
    float saldo;
};

void depositar(struct ContaBancaria *conta, float valor) {
    conta->saldo += valor;
    printf("\nDepósito de %.2f realizado. Saldo atual: %.2f\n", valor, conta->saldo);
}

void sacar(struct ContaBancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado. \n Saldo atual: %.2f\n", valor, conta->saldo);
        return true;
    } else {
        printf("Saque não autorizado. Saldo insuficiente.\n");
        return false;
    }
}

void verificar(struct ContaBancaria *conta) {
    printf("\nSaldo atual: %.2f\n", conta->saldo);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
    struct ContaBancaria minhaConta;
    minhaConta.saldo = 0;

    printf("Nome do titular: ");
    scanf("%s", minhaConta.nomeTitular);

    printf("Número da conta: ");
    scanf("%d", &minhaConta.numeroConta);

    int opcao;
    float valor;

    do {
        printf("\nMenu:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Verificar saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nValor do depósito: ");
                scanf("%f", &valor);
                depositar(&minhaConta, valor);
                break;
            case 2:
                printf("\nValor do saque: ");
                scanf("%f", &valor);
                sacar(&minhaConta, valor);
                break;
            case 3:
                verificar(&minhaConta);
                break;
            case 4:
                printf("\nEncerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Escolha uma opção válida do menu.\n");
        }
    } while (opcao != 4);

    return 0;
}

