#include <stdio.h>
#include <stdlib.h>
#include "ex05.h"

int main()
{
    Fila f1;
    f1 = fila_cria();

    Fila f2;
    f2 = fila_cria();

    Fila f3;
    f3 = fila_cria();

    printf("- FILA - Renan Caldeira Nunes - SI 14.2.8392");
    printf("\n\nA) Filas, clientes e prioridades: \n");
    fila_organiza(f1,f2,f3,15,0,101);
    fila_organiza(f1,f2,f3,16,1,102);
    fila_organiza(f1,f2,f3,90,0,103);
    fila_organiza(f1,f2,f3,10,0,104);
    fila_organiza(f1,f2,f3,9,0,105);
    fila_organiza(f1,f2,f3,1,0,106);
    printf("Fila f1 (a): ");
    fila_imprime(f1);
    printf("\nFila f2 (b): ");
    fila_imprime(f2);
    printf("\nFila f3 (c): ");
    fila_imprime(f3);

    printf("\n\nB) Quantidade total de clientes do Super Mercado: ");
    printf("\n%d clientes.",fila_quantidade(f1,f2,f3));


    ////////////
    Fila f_nova1;
    f_nova1 = fila_cria();
    fila_insere(f_nova1,2);
    fila_insere(f_nova1,3);
    fila_insere(f_nova1,5);
    fila_insere(f_nova1,7);

    Fila f_nova2;
    f_nova2 = fila_cria();
    fila_insere(f_nova2,1);
    fila_insere(f_nova2,4);
    fila_insere(f_nova2,6);
    fila_insere(f_nova2,8);

    Fila f_nova3;
    f_nova3 = fila_cria();
    ////////////

    Lista l1;
    l1 = lista_criar();

    printf("\n\nC) Preenche uma terceira pilha na ordem crescente: \n");
    printf("f_nova1 e f_nova2: ");
    fila_crescente(f_nova1,f_nova2,f_nova3,l1);
    fila_imprime(f_nova3);

    //////////
    Fila f_maiormenormedia;
    f_maiormenormedia=fila_cria();
    fila_insere(f_maiormenormedia,2);
    fila_insere(f_maiormenormedia,6);
    fila_insere(f_maiormenormedia,8);
    fila_insere(f_maiormenormedia,3);
    //////////

    printf("\n\nD) Maior, menor e media de uma fila: ");
    printf("\nf_maiormenormedia:\n");
    fila_maiormenormedia(f_maiormenormedia);

    /////////////
    Fila f_prioridade;
    f_prioridade= fila_cria();
    fila_insere(f_prioridade,1);
    fila_insere(f_prioridade,2);
    fila_insere(f_prioridade,3);
    fila_insere(f_prioridade,4);
    fila_insere(f_prioridade,5);
    fila_insere(f_prioridade,6);

    Fila f_prioridade1;
    f_prioridade1= fila_cria();

    Fila f_prioridade2;
    f_prioridade2= fila_cria();
    /////////////
    printf("\n\nE) Prioridade: ");
    fila_prioridade(f_prioridade,f_prioridade1,f_prioridade2,3);

    printf("\n\n\n\n\n");
    return 0;
}
