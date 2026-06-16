// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 3

#include <stdio.h>

int main() {
    float nota1;
    float media;

    printf("Digite sua nota");
    scanf("%f",&nota1);

    media = (nota1);

    printf("A media do aluno é: %.2f\n", media);
    if (media >= 6.0)
    {
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }
    return 0;
}