#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void){

    char frase[TAM];
    char *p1 = frase;
    char caractere;
    char *p2 = &caractere;
    int contador = 0;

    puts("Digite uma frase: ");
    fgets(p1, TAM, stdin);

    p1[strcspn(p1, "\n")] = '\0';
    
    puts("Digite um caractere: ");
    *p2 = getchar();

    for(int i = 0; *(p1+i) != '\0'; i++){
        if(*(p1 + i) == *p2){
            contador++;
        }
    }

    printf("O caractere se repete: %d\n", contador);

    return 0;
}