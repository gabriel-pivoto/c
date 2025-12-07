#include <stdio.h>

int main(void) {
    char nome[50];

    printf("Digite seu nome: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        printf("Erro de leitura.\n");
        return 1;
    }

    printf("Ola, %s", nome);
    return 0;
}
