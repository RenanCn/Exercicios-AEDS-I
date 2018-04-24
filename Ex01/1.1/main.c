#include<stdio.h>
#include<stdlib.h>

float notasSoma (float vet[], int tamanho){
    int i;
    float soma;
    for(i=0; i<tamanho; i++)
        soma = soma + vet[i];
    return soma;

}
float notasMedia (float soma, int tamanho){
    float media;
    media = soma / tamanho;
    return media;

}
int main ()
{
    int i;
    int num;

    printf("1.1: \n\n");
    printf("Numero de alunos: ");
    scanf("%d", &num);

    float* vetor = (float*) malloc(num * sizeof(float));

    for(i=0; i<num; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &vetor[i]);
    }

    printf("Soma das notas: %.2f \n", notasSoma(vetor, num));
    printf("Media das notas:  %.2f \n", notasMedia(notasSoma(vetor, num), num));

    return 0;

}
