#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int tamanho, posicoes, contador = 0;
    int *pTamanho = &tamanho;
    int *pPosicoes = &posicoes;
    int *vetor;

    srand(time(NULL));

    puts("Digite o tamanho do vetor: ");
    scanf("%d", pTamanho);

    if(*pTamanho <= 0){
        puts("Erro! Digite um tamanho positivo e diferente de 0");
        return 1;
    }

    puts("Digite a quantidade de posições: ");
    scanf("%d", pPosicoes);

    if(*pPosicoes <= 0){
        puts("Erro! Digite posições positivas");
    }

    vetor = malloc(*pTamanho * sizeof(*vetor));

    if(vetor == NULL){
        puts("Erro na alocação!");
        free(vetor);
        return 1;
    }

    // Geração de números pseudoaleatórios:

    for(int i = 0; i < *pTamanho; i++){
        vetor[i] = (rand() % posicoes);
        printf("Elemento %d: %d\n", i + 1, vetor[i]); 
    }

    printf("-------------------\n");
  
    // Contador de Posições

    for(int i = 0; i < *pPosicoes; i++){
        for(int k = 0; k < *pTamanho; k++){
            if(vetor[k] == i){
                contador++;
            }
        }
    printf("Posicao %d: %d\n", i, contador);
    contador = 0;
    }

    return 0;
}