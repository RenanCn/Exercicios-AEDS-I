#include <stdio.h>
#include <stdlib.h>
#include "ex03.h"

int main()
{

    Lista l;
    printf("Renan Caldeira Nunes - SI\n\n");
    printf("Lista 01 (original): \n");
    l=lista_criar();
    l=lista_inserir(l,2);
    l=lista_inserir(l,6);
    l=lista_inserir(l,8);
    lista_imprimir(l);

    printf("\n\nA) Insere Final: \n");
    printf("l: ");
    l=insereFinal(l,7);
    lista_imprimir(l);

    printf("\n\nB) Insere Posi%c%co: \n",135,198);
    printf("l: ");
    l=inserePosicao(l,15,2);
    lista_imprimir(l);

    printf("\n\nC) Insere Ordenado (decrescente): \n");
    printf("l: ");
    l=insereOrdenado(l,3);
    l=insereOrdenado(l,4);
    l=insereOrdenado(l,5);
    lista_imprimir(l);

    printf("\n\nD) Concatena: \n");
    printf("l e l2: ");
    Lista l2;
    l2=lista_criar();
    l2=lista_inserir(l2,1);
    l2=lista_inserir(l2,2);
    l2=lista_inserir(l2,3);
    l2=lista_inserir(l2,4);
    l2=lista_inserir(l2,5);
    l=concatena(l,l2);
    lista_imprimir(l);

    printf("\n\nE) Copia: \n");
    printf("Copia de l por l3: ");
    Lista l3;
    l3=lista_criar();
    l3=copia(l);
    lista_imprimir(l3);

    // --- Listas para testar interseção e união--- //
    Lista l_teste1;
    l_teste1=lista_criar();
    Lista l_teste2;
    l_teste2=lista_criar();

    l_teste1=lista_inserir(l_teste1,1);
    l_teste1=lista_inserir(l_teste1,2);
    l_teste1=lista_inserir(l_teste1,3);

    l_teste2=lista_inserir(l_teste2,3);
    l_teste2=lista_inserir(l_teste2,2);
    l_teste2=lista_inserir(l_teste2,5);

    // ------------------------------------- //

    printf("\n\nF) Interse%c%co: \n",135,198);
    printf("l_teste1 e l_teste2: ");
    l3=intersecao(l_teste1,l_teste2);
    lista_imprimir(l3);

    printf("\n\nG) Uni%co: \n",198);
    printf("l_teste1 e l_teste2: ");
    l3=uniao(l_teste1,l_teste2);
    lista_imprimir(l3);

    // + listas limpas pra testar //
    Lista l_nova1;
    l_nova1=lista_criar();
    l_nova1=lista_inserir(l_nova1,5);
    l_nova1=lista_inserir(l_nova1,1);

    Lista l_nova2;
    l_nova2=lista_criar();
    l_nova2=lista_inserir(l_nova2,1);
    l_nova2=lista_inserir(l_nova2,5);
    //---------------------//
    printf("\n\nH) Diferen%ca: \n",135);
    printf("l_nova1 e l_nova2: ");
    l3=diferenca(l_nova1,l_nova2);
    lista_imprimir(l3);

    printf("\n\nI) Insere n%cmero repetido (l_nova1): \nCom n%cmero repetido: ",163,163);
    l_nova1=insereNRepetido(l_nova1,5);
    lista_imprimir(l_nova1);
    printf("\nSem n%cmero repetido: ",163);
    l_nova1=insereNRepetido(l_nova1,3);
    lista_imprimir(l_nova1);

    // ++ listas limpas pra testar //
    Lista l_nova3;
    l_nova3=lista_criar();
    l_nova3=lista_inserir(l_nova3,1);
    l_nova3=lista_inserir(l_nova3,2);
    l_nova3=lista_inserir(l_nova3,3);

    Lista l_nova4;
    l_nova4=lista_criar();
    l_nova4=lista_inserir(l_nova4,1);
    l_nova4=lista_inserir(l_nova4,2);
    l_nova4=lista_inserir(l_nova4,3);

    Lista l_nova5;
    l_nova5=lista_criar();
    l_nova5=lista_inserir(l_nova5,3);
    l_nova5=lista_inserir(l_nova5,8);
    l_nova5=lista_inserir(l_nova5,16);
    l_nova5=lista_inserir(l_nova5,15);
    l_nova5=lista_inserir(l_nova5,32);
    //---------------------//

    printf("\n\nJ) Listas iguais: \n");
    printf("l_nova1 e l_nova2: %d",igual(l_nova1,l_nova2));
    printf("\nl_nova3 e l_nova4: %d",igual(l_nova3,l_nova4));

    printf("\n\nK) Verefica se l1 tem 50%c dos elementos de l2: \n",37);
    printf("l_nova4 e l_nova5: %d",lista_50PorcentoIgual(l_nova4,l_nova5));
    printf("\nl_nova3 e l_nova4: %d",lista_50PorcentoIgual(l_nova3,l_nova4));

    printf("\n\nL) Remove pares: \n");
    printf("l_nova5: ");
    l_nova5=removePares(l_nova5);
    lista_imprimir(l_nova5);

    printf("\n\nM) Remove impares: \n");
    printf("l_nova5: ");
    l_nova5=removeImpares(l_nova5);
    lista_imprimir(l_nova5);

    printf("\n\nN) Retira inicio: \n");
    printf("l_nova4: ");
    l_nova4=retiraInicio(l_nova4);
    lista_imprimir(l_nova4);

    printf("\n\nO) Insere soma no final: \n");
    printf("l_nova4: ");
    l_nova4=somaInsere(l_nova4);
    lista_imprimir(l_nova4);

    printf("\n\nP) Insere subtra%c%co no final: \n",135,198);
    printf("l_nova4: ");
    l_nova4=subtraiInsere(l_nova4);
    lista_imprimir(l_nova4);

    printf("\n\nQ) Soma pares: \n");
    printf("l_nova4: ");
    l_nova4=somaPares(l_nova4);
    lista_imprimir(l_nova4);



    printf("\n\n\n\n\n\n");
    return 0;
}
