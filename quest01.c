#include <stdio.h>

int main(void){

    int num1, num2, resultado;
    int *p1 = &num1;
    int *p2 = &num2;
    int *pResultado = &resultado;

    puts("Digite o primeiro numero:");
    scanf("%d", p1);

    puts("Digite o segundo numero:");
    scanf("%d", p2);

    *pResultado = *p1 + *p2;

    printf("O resultado da soma: %d\n", *pResultado);
    printf("O endereço do resultado: %p\n", (void *)pResultado);

    return 0;
}