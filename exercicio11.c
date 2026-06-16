// Adryan Rafael Galvão de Campos
// 3° Téc
// Exercício 11

#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Digite a nota do seu 1º trimestre: ");
    scanf("%f",&nota1);

    printf("Digite a nota do seu 2º trimestre: ");
    scanf("%f",&nota2);

    printf("Digite a nota do seu 3º trimestre: ");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) /3;

    printf("A media do aluno é: %.2f\n", media);

    if (media >= 6.0)
    {
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }
    return 0;
}