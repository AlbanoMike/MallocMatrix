#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int linhas = 3, colunas = 3, i, j;
    int **matrix;
    matrix = (int **) malloc(colunas * sizeof(int));

    for(int i = 0; i < linhas; i++){
        matrix[i] = (int*) malloc(colunas * sizeof(int));
    }
    for(i =0; i < linhas; i++){
        for(j =0; j < colunas; j++){
            matrix[i][j] = i;
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    free(matrix);

    return 0;
}
