#include <stdio.h>

int main() {
    // pesos dos 10 pacotes recebidos no dia (em kg)
    float pesos[10] = {12.5, 3.2, 7.8, 1.5, 20.0, 5.4, 9.1, 0.8, 15.3, 4.7};
    int i, j;
    float aux;

    printf("Dados originais:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f kg\n", pesos[i]);
    }

    // bubble sort crescente
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (pesos[j] > pesos[j + 1]) {
                aux = pesos[j];
                pesos[j] = pesos[j + 1];
                pesos[j + 1] = aux;
            }
        }
    }

    printf("\nOrdem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f kg\n", pesos[i]);
    }

    // bubble sort decrescente (so troca o sinal da comparacao)
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (pesos[j] < pesos[j + 1]) {
                aux = pesos[j];
                pesos[j] = pesos[j + 1];
                pesos[j + 1] = aux;
            }
        }
    }

    printf("\nOrdem decrescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f kg\n", pesos[i]);
    }

    return 0;
}
