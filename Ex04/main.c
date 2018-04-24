#include <stdio.h>
#include <stdlib.h>
#include "ex04.h"

int main(){
printf("- PILHA - Renan Caldeira Nunes - SI\n");

    Lista l1_funcione_desta_vez;
    l1_funcione_desta_vez=lista_criar();
    l1_funcione_desta_vez=lista_inserir(l1_funcione_desta_vez,1);
    l1_funcione_desta_vez=lista_inserir(l1_funcione_desta_vez,2);
    l1_funcione_desta_vez=lista_inserir(l1_funcione_desta_vez,3);
    l1_funcione_desta_vez=lista_inserir(l1_funcione_desta_vez,4);


    Pilha p1;
    p1=pilha_criar();

    Pilha p2;
    p2=pilha_criar();




    printf("\n\nB) Insere par em p1 e impar em p2: ");
    pilha_par_impar(p1,p2,l1_funcione_desta_vez);
    printf("\np1: ");
    pilha_imprime(p1);
    printf("\np2: ");
    pilha_imprime(p2);

    //---- pilhas de teste ----
    Pilha p_nova1;
    p_nova1=pilha_criar();
    pilha_push(p_nova1,5);
    pilha_push(p_nova1,6);
    pilha_push(p_nova1,7);

    Pilha p_nova2;
    p_nova2=pilha_criar();

    //-------------------------

    printf("\n\nC) Copia da pilha 1 para a pilha 2: ");
    pilha_copia(p_nova1,p_nova2);
    printf("\np_nova1: ");
    pilha_imprime(p_nova1);
    printf("\np_nova2: ");
    pilha_imprime(p_nova2);


    ///////////////
    Pilha p3;
    p3=pilha_criar();

    //-------------------
    Pilha pteste3;
    pteste3=pilha_criar();
    pilha_push(pteste3,777);
    pilha_push(pteste3,777);
    pilha_push(pteste3,777);
    pilha_push(pteste3,1);
    pilha_push(pteste3,2);
    pilha_push(pteste3,3);

    Pilha pteste4;
    pteste4=pilha_criar();

    pilha_push(pteste4,4);
    pilha_push(pteste4,5);
    pilha_push(pteste4,6);


    //----------------
    ///////////////

    printf("\n\nD) Intercala numeros entre uma pilha e outra: ");
    printf("\np3: ");
    p3=pilha_intercala(pteste3,pteste4);
    pilha_imprime(p3);

    //-------------------
    Pilha pteste1;
    pteste1=pilha_criar();
    pilha_push(pteste1,4);
    pilha_push(pteste1,6);

    Pilha pteste2;
    pteste2=pilha_criar();
    pilha_push(pteste2,4);
    pilha_push(pteste2,6);
    //----------------

    printf("\n\nE) Compara igualdade entre duas listas: \n");
    printf("pteste1 e pteste2: %d",pilha_comparaIgualdade(pteste1,pteste2));
    printf("\np1 e p2: %d",pilha_comparaIgualdade(p1,p2));

    ////////////

    Pilha pteste5;
    pteste5=pilha_criar();
    pilha_push(pteste5,1);
    pilha_push(pteste5,2);
    pilha_push(pteste5,3);
    pilha_push(pteste5,4);
    pilha_push(pteste5,5);
    pilha_push(pteste5,6);
    pilha_push(pteste5,7);
    pilha_push(pteste5,8);
    pilha_push(pteste5,9);

    Pilha pteste6;
    pteste6=pilha_criar();
    pilha_push(pteste6,10);
    pilha_push(pteste6,11);
    pilha_push(pteste6,12);

    Pilha pteste7;
    pteste7=pilha_criar();
    pilha_push(pteste7,13);
    pilha_push(pteste7,14);
    pilha_push(pteste7,15);

    ////////////

    printf("\n\nF) Desempilha dois elementos da pilha: \n");
    printf("pteste5: ");
    pteste5=pilha_desempilhaDoisElementos(pteste5);
    pilha_imprime(pteste5);


    printf("\n\nG) Desempilha N elementos da pilha: \n");
    printf("pteste5: ");
    pteste5=pilha_desempilha_n_Elementos(pteste5,3);
    pilha_imprime(pteste5);

    printf("\n\nH) Retorna quantidade de elementos da pilha: \n");
    printf("pteste5: ");
    printf("%d elementos.",quantidade_pilha(pteste5));

    printf("\n\nI) Concatena os elementos de uma pilha na outra: ");
    printf("\npteste5 e pteste6: ");
    pteste6=pilha_concatena(pteste6,pteste7);
    pilha_imprime(pteste6);


    //////////////-----------------
    Pilha p_again1;
    p_again1 = pilha_criar();
    pilha_push(p_again1,10);
    pilha_push(p_again1,11);
    pilha_push(p_again1,12);

    Pilha p_again2;
    p_again2 = pilha_criar();
    pilha_push(p_again2,20);
    pilha_push(p_again2,21);
    pilha_push(p_again2,22);

    Pilha p_again3;
    p_again3 = pilha_criar();
    //////////////-----------------

    printf("\n\nJ) Uniao de duas pilhas: \n");
    printf("p_again1 e p_again2: ");
    p_again3 = pilha_uniao(p_again1,p_again2);
    pilha_imprime(p_again3);

    ///////
    Pilha p_k1;
    p_k1=pilha_criar();
    pilha_push(p_k1,5);
    Pilha p_k2;
    p_k2=pilha_criar(p_k2,5);
    Pilha p_k3;
    p_k3=pilha_criar();
    ///////


    /////
    Pilha p_again6;
    p_again6 = pilha_criar();
    pilha_push(p_again6, 39);
    pilha_push(p_again6, 1);
    pilha_push(p_again6, 6);
    pilha_push(p_again6, 2);

    Pilha p_again4;
    p_again4 = pilha_criar();
    pilha_push(p_again4, 1);
    pilha_push(p_again4, 7);
    pilha_push(p_again4, 1);


    Pilha p_again5;
    p_again5 = pilha_criar();
    /////

    printf("\n\nL) Diferenca entre duas pilhas: ");
    printf("\np_again6 e p_again 4: ");
    p_again5=pilha_diferenca(p_again6,p_again4);
    pilha_imprime(p_again5);











    printf("\n\n\n\n\n\n");

    return 0;

}
