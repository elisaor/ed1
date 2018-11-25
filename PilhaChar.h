/* TAD PilhaCh = pilha de caracteres */
/*
  Arquivo: PilhaChar.h
  Autor: Pato Donald
  Date: 11/10/09 10:34
  Descri��o: Define e implementa o tipo de dados PilhaCh
  que pode guardar at� MaxPilha caracteres.
*/

#include "Booleano.h"
#define MaxPilhaCh 80
#define ghost '$'
#define Sinal 0
typedef struct {
      int topo; // topo aponta o local onde ser� colocado o pr�ximo item
      char tabela[MaxPilhaCh];
} PilhaCh;

/* construtores */
void criarPilhaChVazia(PilhaCh *);
/* acesso */
char acessarTopoPilhaCh(PilhaCh *);
bool verificarPilhaChVazia(PilhaCh *);
bool verificarPilhaChCheia(PilhaCh *);
/* manipula��o */
void pushPilhaCh(PilhaCh *, char);
void popPilhaCh(PilhaCh *);


void criarPilhaChVazia(PilhaCh *ap){
     
}

char acessarTopoPilhaCh(PilhaCh *ap){
    char x;
    return x;
}     

bool verificarPilhaChVazia(PilhaCh *ap){
     bool vazia;
     return vazia;
}

bool verificarPilhaChCheia(PilhaCh *ap){
     bool cheia;
     return cheia;
}

void pushPilhaCh(PilhaCh *ap, char ch){

}

void popPilhaCh(PilhaCh *ap){

}

