#include<stdio.h>
#include<conio.h>
#include "ex03.h"

struct lista{
int info;
struct lista* prox;
};


Lista lista_criar(){
return NULL;
}

// insere elemento na lista
Lista lista_inserir(Lista l, int valor){
Lista novo;
novo = (Lista)malloc(sizeof(struct lista));
novo->info = valor;
novo->prox = l;
return novo;
}

//imprime lista
void lista_imprimir(Lista l){
Lista p;
    for(p=l;p!=NULL;p=p->prox)
        printf("[%d]->",p->info);
        printf("NULL");
}

//busca elemento na lista (boolean)
int lista_buscar(Lista l, int valor){
Lista p;
for(p=l;p!=NULL;p=p->prox)
   if(p->info==valor)
   return 1;
return 0;
}


// LETRA A) - ok
Lista insereFinal(Lista l, int elemento){
    Lista aux;
    Lista novo;
    novo = (Lista)malloc(sizeof(struct lista));
    novo->prox = NULL;
    novo->info = elemento;
    if(l==NULL)
    	return novo;
    for(aux=l; aux->prox != NULL; aux=aux->prox){
    }
    aux->prox=novo;
    return l;
}

// LETRA B) - ok finalmente
Lista inserePosicao(Lista l, int valor, int posicao){
Lista novo;
novo=(Lista)malloc(sizeof(struct lista));
novo->info =valor;
novo->prox=NULL;

if(posicao<=0){
  novo->prox=l;
  return novo;
  }

Lista aux =l;
int i=1;

while(i++<posicao && aux->prox !=NULL)
  aux=aux->prox;

novo->prox= aux->prox;
aux->prox = novo;

return l;

}

// LETRA C - ok
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

// LETRA D - OK
Lista concatena(Lista l1, Lista l2){
Lista p;
for(p=l1; p->prox!=NULL;p=p->prox){
}
p->prox=l2;
return l1;
}

// LETRA E - ok
Lista copia(Lista l1){
  /*Lista novo=NULL;
    Lista p=l1;

    for(p=l1; p->prox!=NULL ;p=p->prox){
        novo=insereFinal(novo,p->info);
        }
        novo=insereFinal(novo,p->info);
        return novo;*/
    Lista novo=NULL;
    Lista p=l1;
    for(p=l1; p!=NULL ;p=p->prox){
        novo=insereFinal(novo,p->info);
        }
    return novo;
}

// LETRA F - ok
Lista intersecao (Lista l1, Lista l2){
Lista p1=l1;
Lista p2=l2;
Lista aux=NULL;

for(p1=l1;p1!=NULL;p1=p1->prox)
   if(lista_buscar(p2,p1->info))
      aux=lista_inserir(aux,p1->info);

return aux;
}

// LETRA G - ok
Lista uniao (Lista l1, Lista l2){
Lista p1=l1;
Lista p2=l2;
Lista aux=NULL;

for(p1=l1;p1!=NULL;p1=p1->prox)
       if(lista_buscar(p2,p1->info)==0)
        aux=insereFinal(p2,p1->info);

return aux;
}

// LETRA H -ok
Lista diferenca(Lista l1, Lista l2){
Lista p1=l1;
Lista p2=l2;
Lista aux=NULL;

for(p1,p2 ; p1!=NULL,p2!=NULL ; p1=p1->prox,p2=p2->prox)
   aux=insereFinal(aux,p1->info-p2->info);

return aux;
}


// LETRA I - ok;
Lista insereNRepetido(Lista l1, int elemento){

    Lista p=l1;
    if(lista_buscar(p,elemento)==0){
        p= lista_inserir(p,elemento);
    }
        return p;

}

// LETRA J -ok
int igual (Lista l1, Lista l2){
Lista p1=l1;
Lista p2=l2;

for(p1 ; p1!=NULL; p1=p1->prox){
    if(p1->info != p2->info)
    return 0;
    p2=p2->prox;
    }
    return 1;
}

// LETRA K - ok
int lista_50PorcentoIgual(Lista l1, Lista l2){
Lista p1=l1;
Lista p2=l2;
Lista aux=l2;
float i=0;
float j=0;
    for(aux;aux!=NULL;aux=aux->prox){
        j++;
    }

    for(p1;p1!=NULL;p1=p1->prox){
        if(lista_buscar(p2,p1->info)==1)
            i++;
    }

    if(i/j>=0.5)
        return 1;
    return 0;

}

//LETRA L)- ok
Lista removePares (Lista l){

Lista aux;
Lista novo=NULL;

    for(aux=l;aux!=NULL;aux=aux->prox){
        if(aux->info%2!=0)
            novo=lista_inserir(novo,aux->info);
    }

    return novo;

}

//LETRA M) - ok
Lista removeImpares(Lista l){
Lista p;
Lista aux=NULL;
    for(p=l;p!=NULL;p=p->prox)
        if(p->info%2==0)
            aux=lista_inserir(aux,p->info);

return aux;
}

//LETRA N)ok
Lista retiraInicio (Lista l){
    Lista ant=NULL;
    Lista p=l;

    if(p==NULL)
    return l;
    if(ant==NULL)
    l=p->prox;
    free(p);
    return l;
}


//LETRA O)-ok
Lista somaInsere(Lista l){
Lista p;
int soma =0;
Lista novo;
novo=(Lista)malloc(sizeof(struct lista));
novo->prox=NULL;

for(p=l;p!=NULL;p=p->prox)
    soma+=p->info;

for(p=l;p->prox!=NULL;p=p->prox){
}
    novo->info=soma;
    p->prox=novo;
    return l;
}

//LETRA P)-ok
Lista subtraiInsere (Lista l){
Lista p=l;
int subtrai;
subtrai=p->info;
p=p->prox;
Lista novo=(Lista)malloc(sizeof(struct lista));
novo->prox=NULL;

for(p;p!=NULL;p=p->prox)
    subtrai=subtrai-p->info;

for(p=l;p->prox!=NULL;p=p->prox){
}
    novo->info=subtrai;
    p->prox=novo;
    return l;
}

//Letra Q)-ok
Lista somaPares (Lista l){
Lista p=l;
Lista ant=p;
p=p->prox;
Lista novo=NULL;
int soma=0;

for(p;p!=NULL;ant=p->prox,p=ant->prox){
    soma = ant->info + p->info;
    novo=lista_inserir(novo,soma);
    if(p->prox==NULL)
        return novo;
    }

}




