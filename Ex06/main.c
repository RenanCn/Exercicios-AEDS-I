#include <stdio.h>
#include <stdlib.h>
#include "ex06.h"

int main()
{

    Arvore a1;
    Arvore a2;
    Arvore a3;
    Arvore a4;
    Arvore a5;
    Arvore a;

    a1=arvore_inserir('d',arvore_vazia(a1),arvore_vazia(a1));
    a2=arvore_inserir('b',arvore_vazia(a2),a1);
    a3=arvore_inserir('e',arvore_vazia(a3),arvore_vazia(a3));
    a4=arvore_inserir('f',arvore_vazia(a4),arvore_vazia(a4));
    a5=arvore_inserir('c',a3,a4);
    a=arvore_inserir('a',a2,a5);

    printf("- ARVORES - Renan Caldeira Nunes - SI 14.2.8392\n\n");
    printf("A) Pre-ordem: ");
    arvore_preordem(a);
    printf("\n   Ordem-simetrica: ");
    arvore_simetrica(a);
    printf("\n   Pos-ordem: ");
    arvore_posordem(a);


    printf("\n\nB) Altura da arvore: \n");
    printf("Altura: %d",arvore_altura(a));


    printf("\n\nC) Quantidade de n%cs da arvore: ",162);
    printf("\n%d n%cs.",arvore_contaNos(a),162);


    printf("\n\nD) Quantidade de folhas da arvore: \n");
    printf("%d folhas.",arvore_contaFolhas(a));


    printf("\n\nE) Remove folha: \n");
    a=arvore_removeFolha(a);
    arvore_imprime(a);

//////
Arvore a_teste1;
a_teste1=NULL;
/////


    printf("\n\nF) Determina se a arvore esta cheia ou n%co: \n",198);
    printf("a: %d",arvore_CheiaVazia(a));
    printf("\na_teste1: %d",arvore_CheiaVazia(a_teste1));


    //////////////////////////////////////////////
    Arvore a1_2;
    Arvore a2_2;
    Arvore a3_2;
    Arvore a4_2;
    Arvore a5_2;
    Arvore a_2;

    a1_2=arvore_inserir('d',arvore_vazia(a1_2),arvore_vazia(a1_2));
    a2_2=arvore_inserir('b',arvore_vazia(a2_2),a1_2);
    a3_2=arvore_inserir('e',arvore_vazia(a3_2),arvore_vazia(a3_2));
    a4_2=arvore_inserir('f',arvore_vazia(a4_2),arvore_vazia(a4_2));
    a5_2=arvore_inserir('c',a3_2,a4_2);
    a_2=arvore_inserir('a',a2_2,a5_2);
    //////////////////////////////////////////////

    printf("\n\nG) Verifica se as arvores s%co iguais: \n",198);
    printf("a e a_2: %d",arvore_igual(a,a_2));

    ////////

    printf("\n\nH) Menor vai pra esquerda e maior vai pra direita: \n");
    Arvore maokai;
    Arvore maokai2;
    Arvore maokai3;
    maokai = arvore_subvalor(arvore_vazia(maokai),'c');
    maokai2 = arvore_subvalor(maokai,'b');
    maokai3 = arvore_subvalor(maokai2,'a');
    arvore_imprime(maokai3);

    Arvore help=NULL;

    ///////////

    printf("\n\nI) Ocorrencias de um determinado valor: ");
    printf("\na_2: %d",arvore_ocorrencias(a,'a'));

    printf("\n\nJ) Arvore nega valor repetido: ");
    printf("\nmaokai3: ");
    maokai3=arvore_negaRepetido(maokai3,'a');
    arvore_imprime(maokai3);

    printf("\n\nK)Retorna o maior elemento da arvore: ");
    printf("\nmaokai3: %c",arvore_maior(maokai3));

    printf("\n\nK)Retorna o menor elemento da arvore: ");
    printf("\nmaokai3: %c",arvore_menor(maokai3));

    printf("\n\nM)Arvore copia: ");
    printf("\nmaokai3: ");
    help = arvore_copia(maokai3);
    arvore_imprime(help);

    printf("\n\n\n\n\n");
    return 0;
}
