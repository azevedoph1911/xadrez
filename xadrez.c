#include <stdio.h>

// =========================
// Função recursiva para Torre
// Move 5 casas para a Direita
// =========================
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// =========================
// Função recursiva para Rainha
// Move 8 casas para a Esquerda
// =========================
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =========================
// Função recursiva para Bispo com loops aninhados
// Move 5 casas na Diagonal Cima Direita
// Loop externo simula altura (Cima)
// Loop interno simula largura (Direita)
// =========================
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Simula cada passo do movimento diagonal com loops aninhados
    for (int i = 0; i < 1; i++) { // Loop vertical (Cima)
        for (int j = 0; j < 1; j++) { // Loop horizontal (Direita)
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// =========================
// Movimento do Cavalo com loops aninhados complexos
// Move 2 casas para Cima e 1 para Direita (em "L")
// =========================
void moverCavalo() {
    int movimentos = 1; // Número de movimentos em "L"
    int passosVerticais = 2;
    int passosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        // Loop para vertical (Cima)
        for (int v = 0; v < passosVerticais; v++) {
            if (v == 1) {
                // Pode usar continue para pular alguma lógica (exemplo didático)
                continue;
            }
            printf("Cima\n");
        }

        // Loop para horizontal (Direita)
        int h = 0;
        while (h < passosHorizontais) {
            if (h == 1) {
                // Exemplo de controle extra com break
                break;
            }
            printf("Direita\n");
            h++;
        }
    }
}

int main() {
    // ================================
    // Movimento da Torre (Recursivo)
    // ================================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    // ================================
    // Movimento do Bispo (Recursivo com loops aninhados)
    // ================================
    int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    // ================================
    // Movimento da Rainha (Recursivo)
    // ================================
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // ================================
    // Movimento do Cavalo (Loops complexos)
    // ================================
    moverCavalo();

    return 0;
}
