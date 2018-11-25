/* Tipo de Dados Lista */
/*
  Arquivo: TipoLista.h
  Autor: Lisbete Madsen Barbosa
  Date: 04/10/10 06:45
  Descrição: Implementa o tipo Lista - uma lista de inteiros não negativos
  com representação por encadeamento.
*/
#include <stdlib.h>
#include <stdio.h>
#include "Booleano.h"
#define LIXO -1
typedef struct Celula{
        int elemento;
        struct Celula * next;
}Celula;

typedef struct{
        int tamanho;
        Celula * inicio;
}Lista;

/* INTERFACE */
Lista criarLista();                   // criar uma lista vazia                          [1]
//Lista construirLista(int);            // construir uma lista com n elementos            [2]
int obterTamanho(Lista);              // devolve o tamanho da lista                     [3]
bool verificarVazia(Lista);           // devolve TRUE se a lista é vazia                [4]
void mostrarLista(Lista);             // mostra na tela os elementos da lista           [5]
int obterElemento(Lista, int);        // devolve o registro de ordem k na lista         [6]
int buscarElemento(Lista, int);       // devolve a posição do registro na lista ou zero [7]
void inserirLista(Lista *, int);      // acrescenta um novo elemento ao inicio da lista [8]
void removerLocal(Lista *,int);       // remove o registro de ordem k                   [9]
void esvaziarLista(Lista *);          // torna a lista vazia                            [10]


/* IMPLEMENTAÇÃO */
Lista criarLista(){
         Lista a;
         a.tamanho = 0; a.inicio = NULL;
         return a;
}

bool verificarVazia(Lista a){
     bool vazia = TRUE;
     if (a.inicio != NULL) vazia = FALSE;
     return vazia;
}

int obterTamanho(Lista a){
    int n;
    n = a.tamanho;
    return n;
}

void mostrarLista(Lista a){
     Celula * p;
     int reg;
     int n;
     n = a.tamanho;
     p = a.inicio;
     if (p == NULL) printf("   tamanho da lista = %d   lista vazia",n);
     else {
          printf("tamanho da lista = %d\n",n);
          do {
              reg = p->elemento; printf(" %d\n",reg);
              p = p->next;
              }
          while (p!= NULL);
          }
//     printf("\n");
}

int obterElemento(Lista a, int k){ //devolve o registro de ordem k na lista
    int reg;

    return reg;
}

int buscarElemento(Lista a, int y){   // devolve a posição do registro na lista ou zero
    int reg;
    int pos,c;
    Celula *p;
    pos = 0;
    if (a.inicio != NULL){
                 p = a.inicio; c = 0;
                 do{
                    c = c + 1;
                    reg = p->elemento;
                    if (reg != y) p = p->next;
                    else pos = c;
                   }
                 while ((p!=NULL)&&(pos==0));
                 }
    return pos;
}


void inserirLista(Lista *a, int reg){
     Celula *novo;
     int n;
     n = a->tamanho;
     novo = (Celula *)malloc(sizeof(Celula));
     if (novo != NULL){
              novo->elemento = reg;  novo->next = a->inicio;
              a->inicio = novo;
              a->tamanho = n+1;
              }
}

void removerLocal(Lista *a, int k){

}

void esvaziarLista(Lista *a){

}
