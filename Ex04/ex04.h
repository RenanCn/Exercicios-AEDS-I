#ifndef EX04_H_INCLUDED
#define EX04_H_INCLUDED



typedef struct lista* Lista;
Lista lista_criar();
Lista lista_inserir(Lista, int);
void lista_imprimir(Lista );
Lista insereNRepetido(Lista, int);
int lista_buscar(Lista, int );
Lista uniao (Lista , Lista );
Lista insereFinal(Lista l, int elemento);
//////////////////////////////
typedef struct pilha* Pilha;
void pilha_push(Pilha, int);
int pilha_pop(Pilha);
int pilha_vazia(Pilha);
void pilha_imprime(Pilha);
void pilha_libera(Pilha);
int pilha_buscar(Pilha, int);
int pilha_buscar(Pilha, int);
//////////////////////////////

//LETRA A)
Pilha pilha_binario(int);

//LETRA B)
void pilha_par_impar(Pilha,Pilha, Lista);

//LETRA C)
void pilha_copia(Pilha,Pilha);

//LETRA D)
Pilha pilha_intercala(Pilha,Pilha);

//LETRA E)
int pilha_comparaIgualdade(Pilha,Pilha);

//LETRA F)
Pilha pilha_desempilhaDoisElementos(Pilha);

//LETRA G)
Pilha pilha_desempilha_n_Elementos(Pilha, int);

//LETRA H)
int quantidade_pilha(Pilha);

//LETRA I)
Pilha pilha_concatena(Pilha,Pilha);

//LETRA J)
Pilha pilha_uniao(Pilha,Pilha);

//LETRA K)
Pilha pilha_insereNrepetido(Pilha , int);

//LETRA L)
Pilha pilha_diferenca(Pilha,Pilha);


#endif // EX04_H_INCLUDED
