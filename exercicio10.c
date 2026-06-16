// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 10

#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número multiplo de 5: ");
    scanf("%d", &numero);

    if (numero % 5 == 0) 
    {
        printf("Número múltiplo de 5\n");
    } else {
        printf("Seu número NÃO é múltiplo de 5\n");
    }

    return 0;
}
