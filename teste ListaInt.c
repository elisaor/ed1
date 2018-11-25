/* teste lista de inteiros */

#include "tipoListaInteiro.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\ncapacidade da lista = %d \n\n",Max-1);

    int tamanho;
    int item1, item2, item3,novo1,novo2;
    int posicao;
    int elemento;

    ListaInt a,b,c;

    item1 = 3;
    item2 = 4;
    item3 = 5;
    posicao=2;
    novo1 = 13;
    novo2 = 15;

    printf("\nTESTES COM A LISTA A\n\n");
    a=criarLista();
    tamanho=obterTamanho(a);
    printf("Tamanho: %d \n\n", tamanho);

    a=inserirNoFim(a,item1);
    a=inserirNoFim(a,item2);
    a=inserirNoFim(a,item3);
    a=inserirNoFim(a,novo1);
    a=inserirNoFim(a,novo2);
    mostrarLista(a);
    tamanho=obterTamanho(a);
    printf("novo Tamanho:   %d\n\n", tamanho);
    posicao=2;
    elemento=obterElemento(a,posicao);

    if(elemento==Fantasma) printf("\nPosicao %d fora da lista \n",posicao);
    else  printf("\nElemento na posicao %d = %d \n",posicao,elemento);

    posicao=5;
    elemento=obterElemento(a,posicao);

    if(elemento==Fantasma) printf("\nPosicao %d fora da lista \n",posicao);
    else  printf("\nElemento na posicao %d = %d \n",posicao,elemento);
    printf("\nEndereco de memoria: %d\n\n", &a);

    system("pause");
    return 0;
}


