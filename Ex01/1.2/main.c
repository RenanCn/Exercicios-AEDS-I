#include <stdio.h>
#include <stdlib.h>

float notasMedia(float** matriz, int l, int c){
    int j;
    float media;
    float soma;
    for(j=0; j<c; j++)
        soma = soma + matriz[l][j];
    media = soma/c;
    return media;
}

int main ()
{
    int i, j;
    int aluno, avaliacao;
    float media;
    printf("1.2:\n");
    printf("Numero de alunos: ");
    scanf("%d", &aluno);
    printf("Numero de avalicoes: ");
    scanf("%d", &avaliacao);

    float** matriz = ((float **) calloc (aluno, sizeof(float *)));
    for(i=0; i<aluno; i++)
            matriz[i] = ((float **) calloc (avaliacao, sizeof(float *)));


    for(i=0; i<aluno; i++)
    {
        printf("\nNotas Aluno %d:\n", i+1);
        for(j=0; j<avaliacao; j++)
        {
           printf("Nota %d: ", j+1);
           scanf("%f", &matriz[i][j]);
        }
    }
    printf("Media Aluno:\n");
    for(i=0; i<aluno; i++)
        printf("Media %d: %.2f\n", i+1, notasMedia(matriz, i, avaliacao));

    return 0;

}
