#ifndef EX03_H_INCLUDED
#define EX03_H_INCLUDED

typedef struct lista* Lista;

Lista lista_criar();
Lista lista_inserir(Lista, int);


void lista_imprimir(Lista);
int lista_buscar(Lista , int );



// LETRA A)
Lista insereFinal(Lista, int);

// LETRA B)
Lista inserePosicao(Lista, int, int);

//LETRA C)
Lista insereOrdenado(Lista, int);

//LETRA D)
Lista concatena(Lista, Lista);

//LETRA E)
Lista copia(Lista);

//LETRA F)
Lista intersecao(Lista, Lista);

//LETRA G)
Lista uniao(Lista , Lista);

//LETRA H)
Lista diferenca (Lista, Lista);

//LETRA I)
Lista insereNRepetido (Lista , int);

//LETRA J)
int igual(Lista, Lista);

//LETRA K)
int lista_50PorcentoIgual (Lista, Lista ); //o nome da func n pode iniciar com numero

//LETRA L)
Lista removePares (Lista );

//LETRA M)
Lista removeImpares(Lista);

//LETRA N)
Lista retiraInicio (Lista l);

//LETRA O)
Lista somaInsere (Lista l);

//LETRA P)
Lista subtraiInsere (Lista l);

//LETRA Q)
Lista somaPares (Lista l);



#endif // EX03_H_INCLUDED
