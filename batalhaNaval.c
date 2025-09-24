#include <stdio.h>
#include <stdlib.h> // <-- abs

int main() {
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//vetor para as letras que indica as coluna
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};// vetor para a linha lateral de numeros que indica as linhas
    int tabuleiro[10][10] = {0};//matriz do tabuleiro
    int cone1[5][5];
    int alturanavio1, alturanavio2;
    int imp_tabuleiro, imp_tabuleiro2;
    int modificacao;

    for (int imp_coluna = 0; imp_coluna < 10; imp_coluna++)//repetir as letras da coluna
    {
        printf("  %c", coluna[imp_coluna]);
        if (imp_coluna == 9)
            {
                printf("\n");
            }
    }
    for (imp_tabuleiro = 0; imp_tabuleiro < 10; imp_tabuleiro++){//repetição do primeiro indice do tabuleiro
        printf("%d", linha[imp_tabuleiro]);//numerar as linhas do tabuleiro
        for (imp_tabuleiro2 = 0; imp_tabuleiro2 < 10; imp_tabuleiro2++){//repetição do segundo indice do tabuleiro
            if (tabuleiro[5][imp_tabuleiro2] = (imp_tabuleiro2 >= 1 && imp_tabuleiro2 <= 3)){
                tabuleiro[5][imp_tabuleiro2] = 3;
            }
            if (tabuleiro[imp_tabuleiro][6] = (imp_tabuleiro >= 1 && imp_tabuleiro <= 3)){
                tabuleiro[imp_tabuleiro][6] = 3;
            }
            if (imp_tabuleiro == imp_tabuleiro2 && imp_tabuleiro >= 7 && imp_tabuleiro2 <= 9){
                tabuleiro[imp_tabuleiro][imp_tabuleiro2] = 3;
            }
            if (imp_tabuleiro + imp_tabuleiro2 == 9 && imp_tabuleiro <= 2 && imp_tabuleiro2 <= 9){
                tabuleiro[imp_tabuleiro][imp_tabuleiro2] = 3;
            }
            if (imp_tabuleiro2 >= 2 - imp_tabuleiro && imp_tabuleiro2 <= 2 + imp_tabuleiro && imp_tabuleiro <= 2)
            {
                tabuleiro[imp_tabuleiro][imp_tabuleiro2] = 1;
            }
            if (abs(imp_tabuleiro - 5) + abs(imp_tabuleiro2 - 7) <= 1){
                tabuleiro[imp_tabuleiro][imp_tabuleiro2] = 5;
            }
            if (imp_tabuleiro ==  7 || imp_tabuleiro2 == 4 ){
                if (imp_tabuleiro >= 5 && imp_tabuleiro2 >= 2 && imp_tabuleiro2 <= 6)
                {
                    tabuleiro[imp_tabuleiro][imp_tabuleiro2] = 8;
                }
                
                
            }
            
            printf(" %d ", tabuleiro[imp_tabuleiro][imp_tabuleiro2]);   
        }

            printf("\n");
    }

    
   
    
    
    
    
    
    





    return 0;
}
