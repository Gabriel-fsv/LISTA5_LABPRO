#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

    int main(void){
        int vetor[TAM];
        int *p1 = vetor;

        srand(time(NULL));

        for(int i = 0; i < TAM; i++){
            *(p1 + i) = (rand() % 100) + 1;
            printf("Elemento %d: %d\n", i + 1, *(p1 + i));
            printf("Endereço %d: %p\n", i + 1, (void *)(p1 + i));
            printf("\n");
        }

        return 0;
    }