/* Fila circular de inteiros positivos */
/*
  Arquivo: FilaCircular.c
  Autor: PATO DONALD
  Date: 07/10/09 16:16
  Descrição: Implementa o tipo Fila como fila circular de inteiros positivos
*/
#include <stdlib.h>
#include <stdio.h>
#include "Booleano.h"

#define fantasma 0
#define sinal -1
#define Max 5       /* a fila pode guardar ate 5 elementos */

typedef struct {
        int inicio;  /* inicio indica o local do primeiro da fila */
        int fim;     /* fim indica o local do ultimo da fila */
        int item [Max]; /* o array item guarda os elementos da fila */
} Fila;                 /* a partir do local zero */

void criarFilaVazia(Fila *);    /* o construtor cria a fila vazia */

int acessarFila(Fila);          /* devolve o primeiro da fila; devolve -1 caso a fila seja vazia */
bool verificarFilaVazia(Fila);  /* devolve TRUE se a fila estiver vazia */
bool verificarFilaCheia(Fila);  /* devolve TRUE se nao ha mais lugar na fila */

void pushFila(Fila *, int);     /* coloca o valor dado no fim da fila */
void popFila(Fila *);           /* retira o primeiro da fila */

main ( ){
     Fila f1;
     int a;
     bool ok;
     printf("capacidade da fila = %d \n",Max);

     criarFilaVazia(&f1);
     ok = verificarFilaVazia(f1);    printf("fila vazia = %d \n",ok);

     printf("\n colocando na fila 5,7,8,6,9,2 \n");
     pushFila(&f1,5);  pushFila(&f1,7);   pushFila(&f1,8);
     pushFila(&f1,6);  pushFila(&f1,9);   pushFila(&f1,2);
     ok = verificarFilaCheia(f1);         printf(" fila cheia = %d \n\n",ok);

     a = acessarFila(f1);  printf("primeiro = %d \n",a);

     printf("pop \n"); popFila(&f1); a = acessarFila(f1);  printf("segundo = %d \n",a);

     printf("pop \n"); popFila(&f1); a = acessarFila(f1);  printf("terceiro = %d \n",a);

     printf("pop \n"); popFila(&f1); a = acessarFila(f1);  printf("quarto = %d \n",a);

     printf("pop \n"); popFila(&f1); a = acessarFila(f1);  printf("quinto = %d \n",a);

     printf("pop \n"); popFila(&f1);
     ok = verificarFilaVazia(f1);  printf(" fila vazia = %d \n\n",ok);

     a = acessarFila(f1); printf("primeiro (fantasma) = %d \n",a);

     system("PAUSE");
}

void criarFilaVazia(Fila * q){

}

int acessarFila(Fila q){

}

bool verificarFilaVazia(Fila q){

}

bool verificarFilaCheia(Fila q){

}

void pushFila(Fila * q, int novo){

}

void popFila(Fila * q){

}
