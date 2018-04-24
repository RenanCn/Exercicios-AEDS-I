#include <stdio.h>
#include <stdlib.h>
#include "ex05.h"



///////////////////
struct lista{
int info; //
struct lista* prox;
};

Lista lista_criar(){
    return NULL;
}

Lista insereOrdenado(Lista l, int elemento){
Lista novo;
Lista ant = NULL;
Lista p=l;

while(p!=NULL && p->info>elemento){ // |x|.|-> |y|.|-> NULL
    ant = p;                        //  info ~  elem
    p=p->prox;
}

novo=(Lista)malloc(sizeof(struct lista));
novo->info = elemento;

if (ant==NULL){
    novo->prox=l;
    l=novo;
}
else{
novo->prox = ant->prox;
ant->prox=novo;
}
    return l;
}

void lista_imprimir(Lista l)
{
    Lista p;
    for(p=l;p!=NULL;p=p->prox)
    {
        printf("%d->",p->info);
    }
    printf("NULL");
}
//////////////////////////////////////////////////////////////////////////////
struct pilha{
  Lista prim;
};

Pilha pilha_criar(void){
    Pilha p = (Pilha)malloc(sizeof(struct pilha));
    p->prim=NULL;
    return p;
}

void pilha_push(Pilha p, int valor){
    Lista novo = (Lista)malloc(sizeof(struct lista));
    novo->info=valor;
    novo->prox=p->prim;
    p->prim=novo;
}

int pilha_pop(Pilha p){
Lista t;
int v;
if(pilha_vazia(p)){
    printf("Pilha vazia!");
    exit(1);
}
t=p->prim;
v=t->info;
p->prim=t->prox;
free(t);
return v;

}

int pilha_vazia(Pilha p){
    return (p->prim == NULL);
}

///////////////////
struct fila{
Lista ini;
Lista fim;
};


Fila fila_cria(void){
Fila f = (Fila)malloc(sizeof(Fila));
f->ini = f->fim = NULL;
return f;
}

void fila_insere(Fila f, int v){
Lista n = (Lista)malloc(sizeof(Lista));
n->info = v;
n->prox = NULL;
if(f->fim !=NULL)
    f->fim->prox=n;
else
    f->ini=n;
f->fim=n;
}

int fila_retira(Fila f){
Lista t;
int v;
if(fila_vazia(f)){
    printf("Fila vazia!\n");
    exit(1);
}
t=f->ini;
v=t->info;
f->ini=t->prox;
if(f->ini == NULL)
    f->fim=NULL;
free(t);
return v;
}// a fila estará vazia se a lista estiver vazia
int fila_vazia(Fila f){
return (f->ini==NULL);
}

void fila_libera(Fila f){
Lista q = f->ini;
while(q!=NULL){
    Lista t = q->prox;
    free(q);
    q=t;
}
free(f);
}

void fila_imprime(Fila f){
Lista q;
for(q=f->ini; q!=NULL;q=q->prox)
    printf("[%d]->",q->info);
    printf("NULL");
}



///////////////////

// LETRA A) - ?
void fila_organiza (Fila f1_a, Fila f2_b, Fila f3_c, int quantidade,int especial, int id_cliente){
    if(especial==1)
        fila_insere(f3_c,id_cliente);
    else if(quantidade>=11)
        fila_insere(f1_a,id_cliente);
    else
        fila_insere(f2_b,id_cliente);
}

// LETRA B) - ok?
int fila_quantidade(Fila f1, Fila f2, Fila f3){
int i=0;
while(f1->ini!=NULL){
if(fila_retira(f1));
i++;
}
while(f2->ini!=NULL){
if(fila_retira(f2));
i++;
}
while(f3->ini!=NULL){
if(fila_retira(f3));
i++;
}
return i;

}

// LETRA C) - ok
void fila_crescente(Fila f1,Fila f2,Fila f3,Lista l1){
Lista p;
Fila aux=fila_cria();
Pilha p_ajuda = pilha_criar();

    while(!fila_vazia(f1))
       l1=insereOrdenado(l1,fila_retira(f1));

    while(!fila_vazia(f2))
        l1=insereOrdenado(l1,fila_retira(f2));


    for(p=l1;p!=NULL;p=p->prox)
       pilha_push(p_ajuda,p->info);

    while(p_ajuda->prim!=NULL)
        fila_insere(f3,fila_retira(p_ajuda));
}

// LETRA D)
void fila_maiormenormedia(Fila f1){
float soma=0,i=0;
float media;
Lista p;
Lista l1 = lista_criar();

    while(f1->ini!=NULL){
       l1=insereOrdenado(l1,fila_retira(f1));
    }
    p=l1;

    printf("Maior numero: %d\n",p->info);

    for(p;p->prox!=NULL;p=p->prox){
    }
      printf("Menor numero: %d\n",p->info);


    for(p=l1;p!=NULL;p=p->prox){
        soma += p->info;
        i++;
    }
    media=soma/i;
    printf("Media da lista: %.2f",media);
}

// LETRA E)
void fila_prioridade(Fila f1,Fila f2,Fila f3,int p){
    int a;
    while(!fila_vazia(f1)){/// se !=  vazia
        a=fila_retira(f1); /// a recebe 1 ele de f1
        if(a<=p){   /// a < ou= p
            fila_insere(f2,a);
        }
        else{
            fila_insere(f3,a);
            }

    }

    printf("\nPrioridade 1: ");
    fila_imprime(f2);
    printf("\nPrioridade 2: ");
    fila_imprime(f3);

}
