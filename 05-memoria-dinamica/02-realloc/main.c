#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int tamanho_inicial = 5;
    int novo_tamanho = 10;

    int *v = malloc((size_t)tamanho_inicial * sizeof(int));
    if (v == NULL) {
        printf("Erro na alocacao inicial\n");
        return 1;
    }

    for (int i = 0; i < tamanho_inicial; i++) {
        v[i] = i + 1;
    }

    printf("Array original (%d elementos):\n", tamanho_inicial);
    for (int i = 0; i < tamanho_inicial; i++) {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    int *novo = realloc(v, (size_t)novo_tamanho * sizeof(int));
    if (novo == NULL) {
        printf("Erro no realloc\n");
        free(v);
        return 1;
    }

    v = novo;
    for (int i = tamanho_inicial; i < novo_tamanho; i++) {
        v[i] = i + 1;
    }

    printf("Array redimensionado (%d elementos):\n", novo_tamanho);
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);
    return 0;
}
