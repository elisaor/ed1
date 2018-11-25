/* TAD Pilha = pilha de reais */
/*
  Arquivo: PilhaReal.h
  Autor: Pato Donald
  Date: 11/10/09 10:58
  Descri��o: Define e implementa o tipo de dados Pilha
  que pode guardar at� MaxPilha n�meros reais. 
*/

#include "Booleano.h"
#define MaxPilha 80
#define Sinal 0
#define fantasma -9999.99
typedef struct {
      int topo;	// topo aponta o local onde ser� colocado o pr�ximo item
      float tabela[MaxPilha];
} Pilha;

/* construtores */
void criarPilhaVazia(Pilha *);
/* acesso */
float acessarTopo(Pilha *);
bool verificarPilhaVazia(Pilha *);
bool verificarPilhaCheia(Pilha *);
/* manipula��o */
void pushPilha(Pilha *, float);
void popPilha(Pilha *);


void criarPilhaVazia(Pilha *ap){
     ap->topo = Sinal;
}


float acessarTopo(Pilha *ap){
    float y;
    return y;
}     

bool verificarPilhaVazia(Pilha *ap){
     bool vazia;
     return vazia;
}

bool verificarPilhaCheia(Pilha *ap){
     bool cheia;
     return cheia;
}

void pushPilha(Pilha *ap, float y){

}

void popPilha(Pilha *ap){

}

