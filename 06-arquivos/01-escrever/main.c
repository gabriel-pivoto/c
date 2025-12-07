#include <stdio.h>

int main(void) {
    FILE *f = fopen("saida.txt", "w");
    if (f == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }

    fprintf(f, "Linha 1\n");
    fprintf(f, "Linha 2\n");
    fprintf(f, "Gerada por fwrite/fprintf.\n");

    fclose(f);
    printf("Arquivo 'saida.txt' escrito com sucesso.\n");
    return 0;
}
