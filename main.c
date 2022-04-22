#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int contador, quantidade_alunos;
    float *notas, soma, media;
    notas = (float*)malloc(sizeof(float));

    printf("Programa para calcular as m�dias dos alunos!\nUsando Vetor de Aloca��o Din�mica\n\n");
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);

    notas = realloc(notas, quantidade_alunos*sizeof(float));

    for (contador = 0; contador < quantidade_alunos; contador++) {
        printf("Digite a nota do(a) aluno(a) %d: ", contador + 1);
        scanf("%f", &notas[contador]);

        soma += notas[contador];
    }

	media = soma / quantidade_alunos;

    printf("\nA m�dia das notas da turma �: %.2f\n", media);

    return 0;
}
