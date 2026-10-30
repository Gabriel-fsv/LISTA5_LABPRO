#include <stdio.h>

int main(void){

    int num1, menor;
    int *p1 = &num1, *pMenor = &menor;

    puts("Digite um numero(0 para sair):");
    scanf("%d", p1);
    if(*p1 == 0){
        puts("Fim do Programa!");
        return 0;
    }
    *pMenor = *p1;
    printf("O menor numero: %d\n", *pMenor);

    while(*p1 != 0){
        puts("Digite um numero(0 para sair):");
        scanf("%d", p1);
            if(*p1 == 0){
                break;
            }
            if(*p1 < *pMenor){
                *pMenor = *p1;
            }
        
        printf("O menor numero: %d\n", *pMenor);
    }
    puts("Fim do Programa!");

    return 0;
}