#include <stdio.h>

// Função recursiva para movimento da Torre (direita)
void mover_torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}

// Função recursiva para movimento do Bispo (diagonal superior direita)
void mover_bispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    mover_bispo(casas - 1);
}

// Função recursiva para movimento da Rainha (esquerda)
void mover_rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função para movimento do Cavalo (L: 2 cima, 1 direita) com loops complexos
void mover_cavalo() {
    // Loop externo para controle do movimento em L
    for (int parte_l = 0; parte_l < 2; parte_l++) {
        // Primeira parte do L: 2 casas para cima
        for (int cima = 0; cima < 2; cima++) {
            if (parte_l > 0) break; // Só faz na primeira iteração
            printf("Cima\n");
        }
        
        // Segunda parte do L: 1 casa para a direita
        for (int direita = 0; direita < 1; direita++) {
            if (parte_l == 0) continue; // Pula na primeira iteração
            printf("Direita\n");
        }
    }
}

// Função alternativa para Bispo com loops aninhados
void mover_bispo_loops() {
    // Loop externo para movimento vertical (cima)
    for (int vertical = 0; vertical < 5; vertical++) {
        // Loop interno para movimento horizontal (direita)
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre (recursivo) - 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita - recursivo):\n");
    mover_torre(5);
    
    // Movimento do Bispo (recursivo) - 5 casas na diagonal superior direita
    printf("\nMovimento do Bispo (5 casas na diagonal - recursivo):\n");
    mover_bispo(5);
    
    // Movimento do Bispo com loops aninhados
    printf("\nMovimento do Bispo com loops aninhados (5 casas na diagonal):\n");
    mover_bispo_loops();
    
    // Movimento da Rainha (recursivo) - 8 casas para a esquerda
    printf("\nMovimento da Rainha (8 casas para a esquerda - recursivo):\n");
    mover_rainha(8);
    
    // Movimento do Cavalo (2 cima, 1 direita) com loops complexos
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    mover_cavalo();
    
    return 0;
}