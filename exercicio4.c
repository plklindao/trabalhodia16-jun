// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 4

#include <stdio.h>

int main() {
    float num1;
    float num2;
    float media;

    printf("Digite seu 1º número: ");
    scanf("%f",&num1);

    printf("Digite seu 2º número: ");
    scanf("%f",&num2);

    if (num1 > num2)
    {
        printf("O 1º número é maior que o 2º número \n");
    }else if (num2 > num1){
        printf("O 2º número é maior que o 1º número\n");
    }else{
        printf("Ocorreu em erro tente novamente\n");
    }
    return 0;
}