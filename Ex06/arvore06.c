#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include "ex06.h"


struct arvore{
    char info;
    Arvore esq;
    Arvore dir;
};

Arvore arvore_criar(void){
    return NULL;
}

Arvore arvore_inserir(char c,Arvore sae, Arvore sad){
       Arvore novo= (Arvore)malloc(sizeof(struct arvore));
       novo->esq=sae;
       novo->dir=sad;
       novo->info=c;
       return novo;
}

int arvore_vazia(Arvore a){
    return a==NULL;
}


void arvore_imprime(Arvore a){
        printf("<");
    if(!arvore_vazia(a)){
        printf("[%c]",a->info);
        arvore_imprime(a->esq);
        arvore_imprime(a->dir);
    }
        printf(">");
}

Arvore arvore_libera(Arvore a){
    if(!arvore_vazia(a)){
        arvore_libera(a->esq);
        arvore_libera(a->dir);
        free(a);
    }
    return NULL;
}

////////////////

//LETRA A)- ok
void arvore_preordem(Arvore a){
        printf("<");
    if(!arvore_vazia(a)){
        printf("[%c]",a->info);
        arvore_imprime(a->esq);
        arvore_imprime(a->dir);
    }
        printf(">");
}

void arvore_simetrica(Arvore a)
{
        printf("<");
    if(!arvore_vazia(a)){
        arvore_imprime(a->esq);
        printf("[%c]",a->info);
        arvore_imprime(a->dir);
    }
        printf(">");
}

void arvore_posordem(Arvore a){
        printf("<");
    if(!arvore_vazia(a))
    {

        arvore_imprime(a->dir);
        arvore_imprime(a->esq);
         printf("(%c)",a->info);
    }
        printf(">");
}


// LETRA B) - ok
int arvore_altura(Arvore a)
{
    if(a==NULL)
        return -1;
    else{

        int altura_esq,altura_dir;

        altura_esq=arvore_altura(a->esq);
        altura_dir=arvore_altura(a->dir);
        if(altura_esq<altura_dir)
            return altura_dir+1;
        else
            return
            altura_esq+1;
    }

}

//LETRA C) -ok
int arvore_contaNos(Arvore a){
    if(a==NULL)
        return 0;
    else
        return 1+ arvore_contaNos(a->esq)+arvore_contaNos(a->dir);
}

//LETRA D) - ok
int arvore_contaFolhas(Arvore a){
    if(a==NULL)
        return 0;
    if(a->esq==NULL && a->dir==NULL)
        return 1;

    return arvore_contaNos(a->esq) + arvore_contaNos(a->dir);
}

//LETRA E) ok
Arvore arvore_removeFolha(Arvore a){
    if(!arvore_vazia(a)){

    if(a->esq==NULL && a->dir==NULL){
        Arvore aux=a;
        free(aux);
        a=NULL;
        return a;
        }
        a->esq= arvore_removeFolha(a->esq);
        a->dir= arvore_removeFolha(a->dir);
    }

    return a;
}


//LETRA F) -ok
int arvore_CheiaVazia(Arvore a){

if(a==NULL)
        return 0;
    if(arvore_altura(a)==0)
        return 1;
    if(arvore_contaNos(a)!= (int)pow(2,arvore_altura(a)))
        return 0;
        return 1;

/*if(arvore_contaNos(a) != pow(2,arvore_altura(a)*2-1))
    return 0;
    return 1;
*/

/*if(arvore_contaNos(a) != pow(2,(arvore_altura(a))-1))
    return 0;
    return 1;
}*/
}
//LETRA G) -ko
int arvore_igual(Arvore a1, Arvore a2){
    if(arvore_altura(a1)!=arvore_altura(a2))  //altura != /no != /arv !=vazia a1 a2
        return 0;

    if(arvore_contaNos(a1)!=arvore_contaNos(a2))
        return 0;


    if(!arvore_vazia(a1) && !arvore_vazia(a2)){
        if(a1->info != a2->info){
            return 0;
        arvore_igual(a1->esq,a2->esq);
        arvore_igual(a1->dir,a2->dir);
    }
    }
    return 1;
}


//LETRA H) -ok
Arvore arvore_subvalor(Arvore a, char v){
    if(a==NULL){
        a=(Arvore)malloc(sizeof(struct arvore));
        a->info=v;
        a->esq=a->dir=NULL;
    }
    else if(v < a->info)
        a->esq= arvore_subvalor(a->esq,v);
        else
        a->dir=arvore_subvalor(a->dir,v);
        return a;
}

//LETRA I)-ok
int arvore_ocorrencias(Arvore a, char valor){
    if(a==NULL)
        return 0;

    if(a->info == valor){
    return 1+arvore_ocorrencias(a->esq,valor)+arvore_ocorrencias(a->dir,valor);
    }
    else
       return arvore_ocorrencias(a->esq,valor)+arvore_ocorrencias(a->dir,valor);
}

//LETRA J)-oko
Arvore arvore_negaRepetido(Arvore a, char v){
if(a==NULL){
   a=(Arvore)malloc(sizeof(struct arvore));
   a->info=v;
   a->esq=a->dir=NULL;
   return a;
}
if(a->info == v)
   return a;

if(a->info > v)
   a->esq = arvore_negaRepetido(a->esq, v);
   else
   a->dir = arvore_negaRepetido(a->dir, v);
return a;
}

//LETRA K) -ok
char arvore_maior(Arvore a){
    if(a==NULL)
        return 0;

    if(a->dir==NULL)
        return a->info;

    return arvore_maior(a->dir);
}

//LETRA L) OK
char arvore_menor(Arvore a){
    if(a==NULL)
        return 0;

    if(a->esq==NULL)
        return a->info;

    return arvore_menor(a->esq);
}

//LETRA M)-ok
Arvore arvore_copia(Arvore a){
if(a==NULL)
    return NULL;
Arvore c=NULL;
c=arvore_subvalor(c,a->info);
c->esq=arvore_copia(a->esq);
c->dir=arvore_copia(a->dir);
 return c;
}
