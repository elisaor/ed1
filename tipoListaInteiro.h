/* TAD ListaInt */
/*
  Arquivo: tipoListaInteiro.h
  Autor: Pato Donald
  Date: 09/09/13 13:17
  Descrição: Implementa o tipo ListaInt
*/

#include<stdio.h>
#include "Booleano.h"
#define Max 5
#define Fantasma 0


typedef struct {
        int comprimento;
        int tabela[Max];
} ListaInt;

//Interface
    ListaInt criarLista();                        // criar uma lista vazia
    int obterTamanho(ListaInt);                   // obter o tamanho da lista
    int obterElemento(ListaInt, int);             // obter o item de ordem p
    void mostrarLista(ListaInt);                  // está pronta

    ListaInt inserirNoFim(ListaInt,int);          // inserir um item no final da lista


//Implementações

ListaInt criarLista(){
         ListaInt listaA;
         listaA.comprimento = 0;
         return listaA;
}

void mostrarLista(ListaInt s1){
     int k, n;
     n = s1.comprimento;
     if (n==0) printf(" \n lista vazia \n");
     else {
            printf("\n");
            for(k=1;k<=n;k++)printf(" %d ", s1.tabela[k]);
     }
     printf("\n");
}

int obterTamanho(ListaInt L){
    int c;
    c = L.comprimento;
    return c;
}

int obterElemento(ListaInt L, int p){
    int item, t;
    t = L.comprimento;
    if((p>=1)&&(p<=t)) item = L.tabela[p]; else item = Fantasma;
    return item;
}

ListaInt inserirNoFim(ListaInt L,int y){
         int t;
         t = L.comprimento;
         if (t<Max-1){
                L.tabela[t+1] = y;
                L.comprimento = t+1;
         }
         return L;
}
