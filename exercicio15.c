// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 15

#include <stdio.h>

int main() {
    int n1;
    int n2;

    printf("Digite seu primeiro número: ");
    scanf("%d", &n1);
    printf("Digite seu segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("Maior número: %d\n", n1);
        printf("Menor número: %d\n", n2);
        
    } else {
        printf("Maior número: %d\n", n2);
        printf("Menor número: %d\n", n1);
    }

    if (n1 % 2 == 0) {
        printf("%d é par\n", n1);
    } else {
        printf("%d é ímpar\n", n1);
    }


    if (n2 % 2 == 0) {
        printf("%d é par\n", n2);
    } else {
        printf("%d é ímpar\n", n2);
    }

    return 0;
}
