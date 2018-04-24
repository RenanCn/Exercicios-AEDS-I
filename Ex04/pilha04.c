#include <stdio.h>
#include <stdlib.h>
#include "ex04.h"

struct lista{
int info;
struct lista* prox;
};

Lista lista_criar(){
return NULL;
}

Lista lista_inserir(Lista l, int valor){
Lista novo;
novo = (Lista)malloc(sizeof(struct lista));
novo->info = valor;
novo->prox = l;
return novo;
}

void lista_imprimir(Lista l){
    Lista p;
    for(p=l;p!=NULL;p=p->prox)
        printf("[%d]->", p->info);
        printf("NULL");
}

int lista_buscar(Lista l, int valor){
Lista p;
for(p=l;p!=NULL;p=p->prox)
   if(p->info==valor)
   return 1;
return 0;
}

Lista insereNRepetido(Lista l1, int elemento){

    Lista p=l1;
    if(lista_buscar(p,elemento)==0){
        p= lista_inserir(p,elemento);
    }
        return p;

}


///////////////////////////////////////////////////
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


void pilha_libera(Pilha p){
    Lista q = p->prim;
    while(q!=NULL){
        Lista t = q->prox;
        free(q);
        q=t;
    }
}

void pilha_imprime(Pilha p){
    Lista q;
    if(pilha_vazia(p))
        printf("Pilha vazia! - ");
    for(q=p->prim;q!=NULL;q=q->prox)
        printf("[%d]->",q->info);
        printf("NULL");
}

///////////////////////////////

// LETRA A) -
Pilha pilha_binario(int valor){
Pilha aux_quo = pilha_criar();
Pilha aux_resto = pilha_criar();
  while(valor!=1){
      pilha_push(aux_quo, valor/2);
      pilha_push(aux_resto, valor%2);
}
return aux_resto;

}

// LETRA B)-OK
void pilha_par_impar(Pilha p1,Pilha p2,Lista l){
Lista aux;

    for(aux=l;aux!=NULL;aux=aux->prox){
        if(aux->info%2==0){
        Lista novo=(Lista)malloc(sizeof(struct lista));
        novo->info=aux->info;
        novo->prox = p1->prim;
        p1->prim =novo;
        }
        else{
        Lista nova=(Lista)malloc(sizeof(struct lista));
        nova->info=aux->info;
        nova->prox = p2->prim;
        p2->prim =nova;
        }
    }

}

// LETRA C) - ok
void pilha_copia(Pilha p1,Pilha p2){

Pilha aux;
aux=pilha_criar();
while(p1->prim!=NULL){
    pilha_push(aux,pilha_pop(p1));
    pilha_push(p2,pilha_pop(aux));
}

/*Lista l1;
Lista l2;
Lista l_aux;
Pilha p_aux=pilha_criar();

for(l1=p1->prim;l1!=NULL;l1=l1->prox)
    pilha_push(p_aux, l1->info);// l1 joga info abc em cba no aux;

for(l_aux=p_aux->prim;l_aux!=NULL;l_aux=l_aux->prox) //aux deve jogar cba na pilha 2 como abc
    pilha_push(p2, l_aux->info); // \o/
*/
}

// LETRA D) - ok
Pilha pilha_intercala(Pilha p1, Pilha p2){
Pilha aux = pilha_criar();

while(p1->prim!=NULL && p2->prim!=NULL){
    pilha_push(aux, pilha_pop(p2));
    pilha_push(aux,pilha_pop(p1));
}
//condições caso as pilhas sejam de tamanhos diferentes (jogará todo o conteudo da pilha !=NULL em p3
while(p1->prim!=NULL)
    pilha_push(aux,pilha_pop(p1));
while(p2->prim!=NULL)
    pilha_push(aux, pilha_pop(p2));

return aux;
}


// LETRA E) - ggwp
int pilha_comparaIgualdade(Pilha p1,Pilha p2){

int i=0;
int j=0;
Pilha aux=pilha_criar();
pilha_copia(p1,aux);

while(aux->prim!=NULL){
pilha_push(p1,pilha_pop(aux));
i++;
}

while(p1->prim!=NULL){
    if(pilha_pop(p1)==pilha_pop(p2))
        j++;
    else
        return 0;

if(i==j)
return 1;
}
}


// LETRA F) - ok
Pilha pilha_desempilhaDoisElementos(Pilha p1){
int i=0;

while(i<2){
    pilha_pop(p1);
    i++;
}

return p1;
}

// LETRA G) - ok
Pilha pilha_desempilha_n_Elementos(Pilha p1, int valor){

int i = 0;

while(i<valor){
    pilha_pop(p1);
    i++;
}

return p1;
}

// LETRA H) - ok
int quantidade_pilha(Pilha p1){

int i = 0;

while(p1->prim!=NULL){
    pilha_pop(p1);
    i++;
}

return i;

}

// LETRA I) - ok
Pilha pilha_concatena(Pilha p1, Pilha p2){

Pilha aux = pilha_criar();

while(p2->prim!=NULL)
    pilha_push(aux,pilha_pop(p2));

    while(aux->prim!=NULL)
        pilha_push(p1,pilha_pop(aux));

return p1;

}

// LETRA J -
Pilha pilha_uniao(Pilha p1,Pilha p2){
Pilha p3 = pilha_criar();

while (p1->prim!=NULL && p2->prim!=NULL){
    if(p1->prim!=p2->prim){
        pilha_push(p3, pilha_pop(p1));
        pilha_push(p3, pilha_pop(p2));
    }


}

return p3;
}

// LETRA K -ok
void pilha_insereNRepetido(Lista l, int elemento){
    Pilha p1 = pilha_criar();
    Lista aux;
    Lista p=l;
    if(lista_buscar(p,elemento)==0){
        p= lista_inserir(p,elemento);
    }
    for(aux=p;aux!=NULL;aux=aux->prox){
        pilha_push(p1,aux->info);
    }
}

// LETRA L - ok
Pilha pilha_diferenca(Pilha p1,Pilha p2){
Pilha p3 = pilha_criar();

while(p1->prim!=NULL&&p2->prim!=NULL)
    pilha_push(p3,pilha_pop(p1)-pilha_pop(p2));
//condições caso as pilhas sejam de tamanhos diferentes (jogará todo o conteudo da pilha !=NULL em p3
while(p1->prim!=NULL)
    pilha_push(p3,pilha_pop(p1));
while(p2->prim!=NULL)
    pilha_push(p3, pilha_pop(p2));

return p3;
}




