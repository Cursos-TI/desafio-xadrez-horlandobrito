#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) - usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimento do Bispo (5 casas na diagonal superior direita) - usando while
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita):\n");
    int casa_bispo = 0;
    while (casa_bispo < 5) {
        printf("Cima, Direita\n");
        casa_bispo++;
    }
    
    // Movimento da Rainha (8 casas para a esquerda) - usando do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int casa_rainha = 0;
    do {
        printf("Esquerda\n");
        casa_rainha++;
    } while (casa_rainha < 8);
    
    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) - usando loops aninhados
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    
    // Primeira parte do L: 2 casas para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    
    // Segunda parte do L: 1 casa para a esquerda
    int mov_esquerda = 0;
    while (mov_esquerda < 1) {
        printf("Esquerda\n");
        mov_esquerda++;
    }
    
    return 0;
}