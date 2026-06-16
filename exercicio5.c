// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 4

#include <stdio.h>

int main() {
    int valor;
    printf("Digite o valor da compra: ");
    scanf("%d",&valor);

    if (valor <= 100)
    {
        printf("Não pode ter desconto\n");
    }else{
        printf("Pode ter desconto\n");
    }
    return 0;
}