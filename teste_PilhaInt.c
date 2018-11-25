/* pilha de inteiros */
#include <stdio.h>
#include <stdlib.h>
#include "Booleano.h"
#include "EdsonOliveira_Pilha.h"

// teste para o tipo Pilha
// capacidade da pilha = 4 itens
///* construtores */
//Pilha criarPilha();
//void criarPilhaVazia(Pilha *);
///* acesso */
//int acessarTopo(Pilha);
//bool verificarPilhaVazia(Pilha);
//bool verificarPilhaCheia(Pilha);
///* manipulação */
//void push(Pilha *, int);
//void pop(Pilha *);
//void esvaziarPilha(Pilha *);

main (){
     int y,k;
     Pilha s1,s2;
     bool vazia, cheia;
    criarPilhaVazia(&s2);  vazia = verificarPilhaVazia(s2); printf(" pilha s2 vazia = %d \n",vazia);
 //    s2 = criarPilha();     vazia = verificarPilhaVazia(s2); printf(" pilha s2 vazia = %d \n",vazia);

     printf("\n pilha s2 - teste push \n\n");
     for(k=1;k<=4;k++) {
            push(&s2,2*k+1);
            y = acessarTopo(s2);
            printf("item topo = %d \n", y);
     }

     printf("\n pilha s2 - teste pop \n\n");
     for(k=1;k<=4;k++) {
            pop(&s2); printf("pop pilha ==>  ");
            y = acessarTopo(s2);
            if (y==Fantasma) printf(" pilha vazia\n");
            else printf("item topo = %d \n\n", y);
     }
     printf("\n pilha s2 - fim testes \n\n");
     system("PAUSE");
}
