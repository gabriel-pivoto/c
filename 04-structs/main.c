#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main(void) {
    struct Pessoa p;

    printf("Nome: ");
    if (fgets(p.nome, sizeof(p.nome), stdin) != NULL) {
        p.nome[strcspn(p.nome, "\n")] = '\0'; // remove newline para imprimir bonito
    }

    printf("Idade: ");
    scanf("%d", &p.idade);

    printf("Altura: ");
    scanf("%f", &p.altura);

    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", p.nome, p.idade, p.altura);

    return 0;
}
