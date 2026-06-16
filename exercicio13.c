// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 13

#include <stdio.h>

int main() {
    int salario;
    printf("Digite seu sálario: ");
    scanf("%d",&salario);

    if (salario >= 500)
    {
        printf("Exige autorização da gerência\n");
    }else{
        printf("A venda pode ser realizada normalmente\n");
    }
    return 0;
}