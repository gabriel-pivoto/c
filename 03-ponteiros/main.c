#include <stdio.h>

void incrementa(int *n) {
    (*n)++;
}

void dobra_todos(int *v, size_t tamanho) {
    for (size_t i = 0; i < tamanho; i++) {
        *(v + i) *= 2; // aritmetica de ponteiros para percorrer o array
    }
}

int main(void) {
    int x = 10;
    incrementa(&x);
    printf("Depois de incrementar: %d\n", x);

    int valores[] = {1, 2, 3, 4};
    size_t tamanho = sizeof(valores) / sizeof(valores[0]);
    dobra_todos(valores, tamanho);

    printf("Array dobrado: ");
    for (size_t i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    int *ponteiro_para_x = &x;
    printf("Endereco de x: %p, valor via ponteiro: %d\n", (void *)ponteiro_para_x, *ponteiro_para_x);

    return 0;
}
