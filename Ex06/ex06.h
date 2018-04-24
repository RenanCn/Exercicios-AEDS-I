#ifndef EX06_H_INCLUDED
#define EX06_H_INCLUDED

typedef struct arvore* Arvore;
Arvore arvore_criar(void);
Arvore arvore_inserir(char,Arvore, Arvore);
int arvore_vazia(Arvore);
void arvore_imprime(Arvore);

//LETRA A)
void arvore_preordem(Arvore);
void arvore_simetrica(Arvore);
void arvore_posordem(Arvore);

//LETRA B)
int arvore_altura(Arvore);

//LETRA C)
int arvore_contaNos(Arvore);

//LETRA D)
int arvore_contaFolhas(Arvore);

//LETRA E)
Arvore arvore_removeFolha(Arvore);

//LETRA F)
int arvore_CheiaVazia(Arvore);

//LETRA G)
int arvore_igual(Arvore, Arvore);

//LETRA H)
Arvore arvore_subvalor(Arvore, char);

//LETRA I)
int arvore_ocorrencias(Arvore , char );

//LETRA J)
Arvore arvore_negaRepetido(Arvore , char);

//LETRA K)
char arvore_maior(Arvore);

//LETRA L)
char arvore_menor(Arvore);

//LETRA M)
Arvore arvore_copia(Arvore);

#endif // EX06_H_INCLUDED
