#include <stdio.h>


int main() {
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//vetor para as letras que indica as coluna
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};// vetor para a linha lateral de numeros que indica as linhas
    int tabuleiro[10][10] = {0};//matriz do tabuleiro

    for (int imp_coluna = 0; imp_coluna < 10; imp_coluna++)//repetir as letras da coluna
    {
        printf("  %c", coluna[imp_coluna]);
        if (imp_coluna == 9)
            {
                printf("\n");
            }
    }
    for (int imp_tabuleiro = 0; imp_tabuleiro < 10; imp_tabuleiro++){//repetição do primeiro indice do tabuleiro
        printf("%d", linha[imp_tabuleiro]);//numerar as linhas do tabuleiro
        for (int imp_tabuleiro2 = 0; imp_tabuleiro2 < 10; imp_tabuleiro2++){//repetição do segundo indice do tabuleiro
            printf(" %d ", tabuleiro[imp_tabuleiro][imp_tabuleiro2]);
            //navio horizontal
            tabuleiro[4][5] = 3;
            tabuleiro[4][6] = 3;
            tabuleiro[4][7] = 3;
            //navio na vertical
            tabuleiro[2][2] = 3;
            tabuleiro[3][2] = 3;
            tabuleiro[4][2] = 3;
            if (imp_tabuleiro2 == 9)//para imprimir corretamento o tabuleiro na tela, toda vez que a 9 ele salta para a proxima linha
            {
                printf("\n");
            }
             
        }
    }

    printf("\n");

    
    
    
    
    
    





    return 0;
}
