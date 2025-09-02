#include <stdio.h>

int main() {
    // Nível Aventureiro - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo - while
    // Implementação de Movimentação da Torre - do while
    // Implementação de Movimentação da Rainha - for
    // Implementação do movimentação do Cavalo - Loop(externo while e interno for)

//Declaração de variaveis
    int i = 0;
    char *direcoes[] = {"Esquerda", "Direita", "Cima", "Baixo"};

//Movimento da rainha    
    printf("\nMovimento da RAINHA:\n");
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


//Movimento do torre
    //Zerando o contador
    i = 0;
    printf("Movimento da TORRE:\n");
    do
    {
        ++i;
        printf("(%s) - ", direcoes[1]);
        
    }while (i < 5);


//Movimento do cavalo feito com loop
    printf("\n\n-------------------------------------\n");  
    //Zerando o contador
    i = 0;
    printf("Movimento do CAVALO:\n");
    while (i < 1)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("(%s) - ", direcoes[3]);
        }
        printf("(%s)\n", direcoes[0]);
        i++;
    }
    
    return 0;
}
