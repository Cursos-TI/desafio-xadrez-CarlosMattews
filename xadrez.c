#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispo(int casas, int passo) {
    if (casas == 0) return;
    for (int i = 0; i < passo; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(casas - 1, passo);
}

int main() {
    // Movimento da Torre (5 casas para a direita) usando recursão
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    printf("\n");
    
    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando recursão com loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1);
    
    printf("\n");
    
    // Movimento da Rainha (8 casas para a esquerda) usando recursão
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    
    printf("\n");
    
    // Movimento do Cavalo (2 casas para cima e 1 para a direita) usando loops aninhados (for e while)
    printf("Movimento do Cavalo:\n");

    // Variáveis de controle
    int movimentos = 1;  // número de vezes que o cavalo se moverá
    int passoCima = 0;   // controle do movimento para cima
    int passoDireita = 0; // controle do movimento para a direita

    // Loop externo para controlar o número total de movimentos do Cavalo
    for (int i = 0; i < movimentos; i++) {
        // Loop aninhado para mover 2 casas para cima
        while (passoCima < 2) {
            printf("Cima\n");
            passoCima++;  // Incrementa o movimento para cima
        }

        // Condição para mover uma casa para a direita após o movimento para cima
        if (passoCima == 2 && passoDireita < 1) {
            printf("Direita\n");
            passoDireita++; // Incrementa o movimento para a direita
        }
    }

    return 0;
}
