#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int i = 0;
    char *direcoes[] = {"Esquerda", "Direita", "Cima", "Baixo"};
//Movimento da rainha    
    printf("Movimento da RAINHA:\n");
    for (int i = 0; i < 8; i++) {
        printf("(%s) - ", direcoes[0]);
    }
    printf("\nMovimento extra da RAINHA: Todas as direcoes\n");
    for (int i = 0; i < 8; i++) {
        printf("(%s) - ", direcoes[i%4]);
    }

    printf("\n\n-------------------------------------\n");
   

//Movimento do bisbo
    printf("Movimento da BISBO:\n");
    while (i < 5)
    {
        printf("(%s,%s) - ", direcoes[2], direcoes[0]);
        ++i;
    }
    printf("\n\n-------------------------------------\n");

//Zerando o contador
    i = 0;

//Movimento do torre
    printf("Movimento da TORRE:\n");
    do
    {
        ++i;
        printf("(%s) - ", direcoes[1]);
        
    }while (i < 5);

    return 0;
}
