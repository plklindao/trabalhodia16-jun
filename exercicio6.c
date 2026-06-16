// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 6

#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) 
    {
        printf("Seu número é PAR.\n");
    } else {
        printf("Seu número é ÍMPAR.\n");
    }

    return 0;
}
