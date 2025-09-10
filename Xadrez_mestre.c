#include <stdio.h>

// Função Recursiva - Torre
void moverTorre(int casas) {
    if (casas == 0) return; // caso base: nenhuma casa restante
    printf("Direita\n");    // movimento da Torre
    moverTorre(casas - 1);  // chamada recursiva
}

// Função Recursiva - Bispo
// (com loops aninhados para representar diagonal)
void moverBispo(int casas) {
    if (casas == 0) return; // caso base
    // loops aninhados simulando a diagonal
    for (int v = 0; v < 1; v++) {         // vertical
        for (int h = 0; h < 1; h++) {     // horizontal
            printf("Cima, Direita\n");
        }
    }
    moverBispo(casas - 1); // chamada recursiva
}


// Função Recursiva - Rainha
void moverRainha(int casas) {
    if (casas == 0) return; // caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}


// Movimento do Cavalo com loops complexos
void moverCavalo() {
    int movimentosVerticais = 2; // duas casas para cima
    int movimentosHorizontais = 1; // uma casa para a direita

    printf("=== Movimento do Cavalo ===\n");

    // Loop externo: movimento vertical (Cima)
    for (int i = 1; i <= movimentosVerticais; i++) {
        // condição extra para demonstrar controle de fluxo
        if (i == 2) {
            // só imprime depois de verificar condição
            printf("Cima\n");
            continue; // vai para a próxima iteração do loop
        }
        printf("Cima\n");
    }

    // Loop interno: movimento horizontal (Direita)
    int j = 1;
    while (j <= movimentosHorizontais) {
        if (j > 1) break; // segurança, impede excesso
        printf("Direita\n");
        j++;
    }
}

int main() {
    // Torre
    int movimentoTorre = 5;
    printf("=== Movimento da Torre ===\n");
    moverTorre(movimentoTorre);

    // Bispo
    int movimentoBispo = 5;
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(movimentoBispo);

    // Rainha
    int movimentoRainha = 8;
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(movimentoRainha);

    // Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}
