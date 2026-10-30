#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

    int main(void){
        int num[TAM];
        int a, b, aux;
        int *pNum = num;
        int *p1 = &a, *p2 = &b;
        int *pAux = &aux;

        srand(time(NULL));

        puts("Digite um intervalo ");
        scanf("%d", p1);

        puts("Digite o segundo numero do intervalo: ");
        scanf("%d", p2);

        if(*p1 > *p2){
            puts("Erro! Intervalo invalido!");
            return 0;
        }

        for(int i = 0; i < TAM; i++){
            *(pNum + i) = ((rand() % (*p2 - *p1)  + 1) + *p1);
            printf("Elemento %d: %d\n", i + 1, *(pNum + i));
        }

        for(int i = 0; i < TAM - 1; i++){
            for(int k = i + 1; k < TAM; k++){
                if(*(pNum + i) > *(pNum + k)){
                *(pAux) = *(pNum + i);
                *(pNum + i) = *(pNum + k);
                *(pNum + k) = *(pAux);
                }

            }
        }

        printf("----------------\n");

        for(int i = 0; i < TAM; i++){
            printf("Elemento %d: %d\n", i + 1, *(pNum + i));
        }

        return 0;
    }