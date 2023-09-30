#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "conio2.h"


struct Moeda {
    float dolar;
    float euro;
};

float DolarEuro(float valorDolar) {
    return valorDolar / 1.09; 
}

float EuroDolar(float valorEuro) {
    return valorEuro * 1.09; 
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
    struct Moeda moeda1;
    
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor em dólar: ");
    scanf("%f", &moeda1.dolar);

    moeda1.euro = DolarEuro(moeda1.dolar);
    printf("Valor em euros: %.2f\n", moeda1.euro);

    printf("Digite o valor em euros: ");
    scanf("%f", &moeda1.euro);

    moeda1.dolar = EuroDolar(moeda1.euro);
    printf("Valor em dólar: %.2f\n", moeda1.dolar);

    return 0;
}

