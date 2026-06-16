// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 8

#include <stdio.h>

int main() {
    int temperatura;
    printf("Digite a temperatura atual: ");
    scanf("%d",&temperatura);

    if (temperatura > 30)
    {
        printf("Muito quente\n");
    }else{
        printf("Temperatura agradável\n");
    }
    return 0;
}