#include <stdio.h>
#include <string.h>
#define TAM 100

    int main(void){
        char nome1[TAM], nome2[TAM];
        char *p1 = nome1;
        char *p2 = nome2;

        printf("Digite o seu nome: ");
        fgets(p1, TAM, stdin);
        p1[strcspn(p1, "\n")] = '\0';

        printf("Digite o sobrenome do seu amigo: ");
        fgets(p2, TAM, stdin);

        printf("Nomes concatenados: %s", strcat(p1, p2));

        return 0;
    }