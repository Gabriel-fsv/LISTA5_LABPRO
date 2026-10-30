#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int tamanho, posicao, r;
    int *pTamanho = &tamanho, *pPosicao = &posicao, *pR = &r;
    int *vetorX, *vetorY, *vetorXY;

    srand(time(NULL));

    puts("Digite o tamanho dos dois vetores: ");
    scanf("%d", pTamanho);

    if(*pTamanho <= 0){
        puts("Erro! Digite um tamanho positivo!");
        return 1;
    }

    puts("Digite a quantidade de posições: ");
    scanf("%d", pPosicao);

    if(*pPosicao <= 0){
        puts("Erro! Digite uma posição positiva!");
        return 1;
    }

    vetorX = malloc(*pTamanho * sizeof(*vetorX));
    vetorY = malloc(*pTamanho * sizeof(*vetorY));

    vetorXY = calloc(*pPosicao * *pPosicao, sizeof(*vetorXY));

    if(vetorX == NULL || vetorY == NULL || vetorXY == NULL){
        puts("Erro ao alocar memória! ");
        free(vetorX);
        free(vetorY);
        free(vetorXY);
        return 1;
    }

    puts("Vetores Gerados: ");

    for(int i = 0; i < *pTamanho; i++){
        vetorX[i] = rand() % *pPosicao;
        printf("Vetor X%d: %d\t", i + 1, vetorX[i]);
        
        *pR = rand() % 10 + 1;

        printf("R%d: %d\t", i + 1, *pR);

        if(*pR <= 3){
            vetorY[i] = vetorX[i];
        }
        else if(*pR <= 5){
            vetorY[i] = vetorX[i] - 1;
        }
        else if(*pR <= 7){
            vetorY[i] = vetorX[i] + 1;
        }
        else if(*pR <= 9){
            vetorY[i] = vetorX[i] - 2;
        }
        else{
            vetorY[i] = vetorX[i] - 1;
        }

        if(vetorY[i] < 0){
            vetorY[i] = 0;
        }
        else if(vetorY[i] >= *pPosicao){
            vetorY[i] = *pPosicao - 1;
        }
        printf("Vetor Y%d: %d\n", i + 1, vetorY[i]);
    }

    for(int i = 0; i < *pTamanho; i++){
        vetorXY[vetorX[i] * *pPosicao + vetorY[i]]++;
    }

    for(int i = 0; i < *pPosicao; i++){
        for(int k = 0; k < *pPosicao; k++){
            printf("%d\t", vetorXY[i * *pPosicao + k]);
        }
    printf("\n");
    }

    free(vetorX);
    free(vetorY);
    free(vetorXY);

    return 0;
}