#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

void imprime_mensagem(void) {
    printf("Oi!\n");
}

void demonstra_fluxo(int limite) {
    for (int i = 0; i < limite; i++) {
        printf("Iteration %d\n", i);
    }

    int opcao = 2;
    switch (opcao) {
    case 1:
        printf("Option 1 selected\n");
        break;
    case 2:
        printf("Option 2 selected\n");
        break;
    default:
        printf("No valid option selected\n");
        break;
    }
}

void demonstra_arrays(void) {
    int origem[] = {0, 1, 2, 3, 4};
    int destino[5];

    for (int i = 0; i < 5; i++) {
        destino[i] = origem[i] * 2;
        printf("destino[%d] = %d\n", i, destino[i]);
    }

    int resultado = soma(3, 4);
    printf("Soma(3, 4) = %d\n", resultado);
    imprime_mensagem();
}

int main(void) {
    printf("Hello, world\n");

    char letra = 'B';
    double pi = 3.14;
    float e = 2.71f;

    demonstra_fluxo(5);
    demonstra_arrays();

    printf("Character: %c, Double: %.2f, Float: %.2f\n", letra, pi, e);
    return 0;
}
