#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "conio2.h"


struct Ponto {
    double x;
    double y;
};


double calDistancia(struct Ponto p1, struct Ponto p2) {
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}


double calInclinacao(struct Ponto p1, struct Ponto p2) {
    if (p2.x - p1.x == 0) {
        return INFINITY;
    }
    return (p2.y - p1.y) / (p2.x - p1.x);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color 5e");
    struct Ponto ponto1 = {5.0, 7.0};
    struct Ponto ponto2 = {6.0, 9.0};


    double distancia = calDistancia(ponto1, ponto2);
    printf("Distância entre os pontos: %.2f\n", distancia);

 
    double inclinacao = calInclinacao(ponto1, ponto2);
    if (isinf(inclinacao)) {
        printf("Inclinação da reta: Vertical\n");
    } else {
        printf("Inclinação da reta: %.2f\n", inclinacao);
    }

    return 0;
}

