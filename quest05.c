#include <stdio.h>
#include <string.h>
#define TAM 100

    int main(void){
        char nome[TAM];
        char *p = nome;

        printf("Digite o seu nome: ");
        fgets(p, TAM, stdin);

        p[strcspn(p, "\n")] = '\0';

        printf("A quantidade de caracteres: %d", strlen(p));

        return 0;
    }