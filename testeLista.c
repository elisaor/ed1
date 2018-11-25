/* TESTE COM TIPO LISTA */
/*  Arquivo: testeLista.c
     Autor: LMB
     Data: 21/04/2013
     Descrição: TESTAR o Tipo Lista.
*/

#include <stdio.h>
#include <stdlib.h>
#include "Booleano.h"
#include "TipoLista.h"

main(){
    bool ok;
    int k,n,y,pos;
    Lista listaA,listaB;
    listaB = criarLista();        printf("\n testes listaB\n ");   mostrarLista(listaB);
    ok = verificarVazia(listaB);  printf(" teste lista vazia = %d\n\n ",ok);
    inserirLista(&listaB, 3); mostrarLista(listaB);
    inserirLista(&listaB, 6);
    inserirLista(&listaB, 9);
    inserirLista(&listaB, 15); mostrarLista(listaB);

//    k = 3;
//    y = obterElemento(listaB,k);  printf("\n elemento na posicao %d: %d \n ",k, y);
//    k = 10;
//    y = obterElemento(listaB,k);  printf("\n elemento na posicao %d: %d \n ",k, y);

    y = 15;
    pos = buscarElemento(listaB,y); printf("\n posicao do elemento %d: %d \n ",y, pos);
    y = 12;
    pos = buscarElemento(listaB,y); printf("\n posicao do elemento %d: %d \n ",y, pos);

    printf("\n testes listaA \n ");
    n = 6;
//  listaA = construirLista(6); mostrarLista(listaA);
    printf("\n");
    system("PAUSE");
}



