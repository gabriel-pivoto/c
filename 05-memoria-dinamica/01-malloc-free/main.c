#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Qtd de numeros: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    int *v = malloc((size_t)n * sizeof(int));
    if (v == NULL) {
        printf("Erro de memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int soma = 0;
    printf("Valores lidos: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
        soma += v[i];
    }
    printf("\nSoma = %d\n", soma);

    free(v);
    return 0;
}
