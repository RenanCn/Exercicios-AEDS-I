#ifndef EX05_H_INCLUDED
#define EX05_H_INCLUDED




///////////
typedef struct lista* Lista;
typedef struct fila* Fila;
typedef struct pilha* Pilha;
////////////

Lista insereOrdenado(Lista, int);
Lista lista_criar();

Fila fila_cria(void);
void fila_insere(Fila,int);
int fila_retira(Fila);
int fila_vazia(Fila);
void fila_libera(Fila);
void fila_imprime(Fila);


//LETRA A)
void fila_organiza (Fila, Fila , Fila, int, int,int);

//LETRA B)
int fila_quantidade(Fila,Fila,Fila);

//LETRA C)
void fila_crescente(Fila,Fila,Fila,Lista);

//LETRA D)
void fila_maiormenormedia(Fila);

//LETRA E)
void fila_prioridade(Fila,Fila,Fila,int);

#endif // EX05_H_INCLUDED
