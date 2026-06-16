// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 14

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >= 18)
    {
        printf("Maior de idade, pode retirar sua carteira\n");
    }else{
        printf( "Menor de idade, não poderá tirar a carteira\n");
    }
    return 0;
}