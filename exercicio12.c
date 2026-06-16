// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 12

#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Digite número 1: ");
    scanf("%d", &a);

    printf("Digite número 2: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("O número %d é maior que o segundo.\n", +a);
    }
    else if (a == b)
    {
        printf("O número é igual.\n", +b);
    }
    else
    {
        printf("O número %d é maior que o primeiro.\n", +b);
    }
    return 0;
}