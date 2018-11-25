/* Sorting */
/* Arquivo: tempo_Sorting.c
   Autor: PATO DONALD
   Data: 28/08/16 15:54
   Descri��o - Este programa mede o tempo de execu��o de alguns algoritmos de ordena��o.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sorting.h"
#define N 50

void construirNumerosAleatorios(int V[],int a,int b);   // armazena no array uma lista aleat�ria
                                                        // com n�meros inteiros pertencentes � faixa [a,b]
void mostrarArray(int V[],int p,int u); // mostra os valores em V, da posi��o p at� a posi��o u

main()
{
    double d;           // vari�vel para guardar a diferen�a entre inicio e fim
    time_t inicio, fim; // instante inicial e instante final
    int A[N];

    construirNumerosAleatorios(A,1000,9999);
    mostrarArray(A,0,N-1);

//    printf("\n   Tempo de execucao = %.10f segundos \n",d);

    printf("\n");
    system("PAUSE");
}


void construirNumerosAleatorios(int V[], int a, int b){
    int i,g;
    double d;
    srand((int) time(NULL));
    for(i=0; i < N; i++){
        d = (double)rand()/((double)RAND_MAX +1);
        g = a + (int)(d*(b-a));
        V[i] = g;
    }
}


void mostrarArray(int V[],int p,int u){
     int j;
     if (p > u) printf("\n lista vazia...\n");
     else for(j=p; j<=u; j++) printf("  %d  ",V[j]);
     printf("\n");
}

