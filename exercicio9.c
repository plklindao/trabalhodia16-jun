// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 9

#include <stdio.h>

int main() {
    int salario;
    printf("Digite seu sálario: ");
    scanf("%d",&salario);

    if (salario <= 2000)
    {
        printf("Pode receber auxílio\n");
    }else{
        printf("Não recebe auxílio\n");
    }
    return 0;
}