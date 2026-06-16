// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 7

#include <stdio.h>

int main() {
    int senha;

    do {
        printf("Digite sua Senha: ");
        scanf("%d", &senha);

        if (senha == 2025) {
            printf("Acesso liberado\n");
        } else {
            printf("Acesso negado\n");
        }
    } while (senha != 2025);

    return 0;
}
