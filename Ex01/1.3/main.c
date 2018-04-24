#include <stdio.h>
#include<stdlib.h>

typedef struct cliente
{
    char nome[30];
    int agencia;
    int conta;
    float saldo12;
    float saldo13;
    float saldo14;

}TCliente;

int main ()
{
    int i, n;
    printf("1.3: \n\n");
    printf("Numero de clientes: ");
    scanf("%d", &n);

    TCliente vet[n];
    for(i=0; i<n; i++)
    {
        printf("Cliente %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", vet[i].nome);
        printf("Agencia: ");
        scanf("%d", &vet[i].agencia);
        printf("Conta: ");
        scanf("%d", &vet[i].conta);
        printf("Saldo de 2012: ");
        scanf("%f", &vet[i].saldo12);
        printf("Saldo de 2013: ");
        scanf("%f", &vet[i].saldo13);
        printf("Saldo de 2014: ");
        scanf("%f", &vet[i].saldo14);
    }

    printf("Dados Salvos -- Clientes:\n");
    for(i=0; i<n; i++)
    {
        printf("\nCliente %d:\n", i+1);
        printf("Nome: %s\n", vet[i].nome);
        printf("Agencia: %d\n", vet[i].agencia);
        printf("Conta: %d\n", vet[i].conta);
        printf("Saldo 2012: %.2f\n", vet[i].saldo12);
        printf("Saldo 2013: %.2f\n", vet[i].saldo13);
        printf("Saldo 2014: %.2f\n", vet[i].saldo14);
    }
    return 0;
}
