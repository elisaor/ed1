/* Hashing - Tratamento de colisões por encadeamento 
  Arquivo: HASH_<seunome>.c
  Autor: Pato Donald
  Date: 22/09/09 09:40
  Descrição: Exemplo de utilização de uma tabela hashing.
             Os dados da tabela são: um valor chave e uma letra
             A tabela hash é um array de listas ligadas. 
*/

#include <stdlib.h>
#include "Booleano.h"

# define M 11
# define hash(k,M) (k % M)   // aqui está definida a função hash
# define fantasma '0'

typedef unsigned int TipoChave;

typedef struct Celula{
        TipoChave cle;
        char letra;
        struct Celula* link;
}Celula;

typedef Celula* TabelaH[M];   // Uma tabela desse tipo é um array de pointer para Celula

void criarHashTable(TabelaH);
void inserirHashTable(TabelaH, TipoChave, char);
char obterItem(TabelaH, TipoChave);

main (){
     TabelaH A;
     char a;
     TipoChave v; 
     criarHashTable(A);
     v = 22;     inserirHashTable(A,v,'F');
     v = 33;     inserirHashTable(A,v,'W');
     a = obterItem(A,v);   printf(" chave = %d  letra = %c \n", v,a);
     v = 11;
     a = obterItem(A,v);   printf(" chave = %d  letra = %c \n", v,a);
     printf("\n");
     system("PAUSE");
}

void criarHashTable(TabelaH dic){
     // EM CONSTRUÇÃO
}

void inserirHashTable(TabelaH dic, TipoChave k, char ch){
     // EM CONSTRUÇÃO
}

char obterItem(TabelaH dic, TipoChave k){
    char item;
    int h;
    TipoChave aux;
    Celula *p;
    bool ok;
    item = fantasma;
    h = hash(k,M);// para usar a função é preciso colocar os nomes dos parâmetros iguais a k e M
    p = dic[h];
    ok = FALSE;
    while ((p!=NULL) && (ok == FALSE)){
          if (p->cle == k) {item = p->letra; ok = TRUE;}
          else p = p->link;
    }
    return item;
}
