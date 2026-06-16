// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 1

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >= 18)
    {
        printf("Maior de idade\n");
    }else{
        printf( "Menor de idade\n");
    }
    return 0;
}