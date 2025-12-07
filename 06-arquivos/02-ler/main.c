#include <stdio.h>

int main(void) {
    FILE *f = fopen("dados.txt", "r");
    if (f == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }

    char linha[100];
    while (fgets(linha, sizeof(linha), f) != NULL) {
        printf("Lido: %s", linha);
    }

    fclose(f);
    return 0;
}
