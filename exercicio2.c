// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 2

#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    if (numero >= 0)
    {
        printf("Positivo");
    }else{
        printf( "Negativo\n");
    }
    return 0;
}