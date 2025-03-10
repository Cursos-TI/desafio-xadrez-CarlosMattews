#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) usando loops aninhados
    printf("Movimento do Cavalo:\n");
    int m = 0;
    while (m < 1) { // Loop externo controla o movimento completo do Cavalo
        for (int n = 0; n < 3; n++) {
            if (n < 2) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
        }
        m++;
    }

    return 0;
}
