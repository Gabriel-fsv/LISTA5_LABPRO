#include <stdio.h>

int main(void){
    int num1, num2, aux;
    int *p1 = &num1, *p2 = &num2, *pAux = &aux;

    puts("Digite o primeiro numero:");
    scanf("%d", p1);

    puts("Digite o segundo numero:");
    scanf("%d", p2);

    *pAux = *p2;
    *p2 = *p1;
    *p1 = *pAux;

    printf("O valor do primeiro numero passou a ser: %d\n", *p1);
    printf("O valor do segundo numero passou a ser: %d\n", *p2);

    return 0;
}