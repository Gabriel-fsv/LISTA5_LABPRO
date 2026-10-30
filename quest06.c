#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void){

    char nome1[TAM], nome2[TAM];
    char aux[TAM];
    char *p1 = nome1;
    char *p2 = nome2;
    char *pAux = aux;

    printf("Digite o primeiro nome: ");
    fgets(p1, TAM, stdin);

    printf("Digite o segundo nome: ");
    fgets(p2, TAM, stdin);

    pAux = p1;
    p1 = p2;
    p2 = pAux;

    printf("O nome do primeiro passou a ser: %s", p1);
    printf("O nome do segundo passou a ser: %s", p2);

    return 0; 
}