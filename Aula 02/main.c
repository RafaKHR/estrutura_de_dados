#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


/*  */

typedef struct{
	float Peso;
	int Idade;
	float Altura;
}Pessoa;

void imprimePessoa(Pessoa P){
	printf("Idade: %d Peso: %.2f Altura: %.2f", P.Idade, P.Peso, P.Altura);
};
void setPessoa(Pessoa *P, float peso, int idade, float altura){
	(*P).Peso = peso;
	P->Idade = idade;
	P->Altura = altura;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
	Pessoa Daniel;
	setPessoa(&Daniel, 67.7,20,1.79);
	imprimePessoa(Daniel); 
	return 0;
}
