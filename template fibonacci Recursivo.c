/* Exemplo de uso da função time */
/* Arquivo: template fiboncci Recursivo.c
   Autor: PATO DONALD
   Data: 28/08/16 15:54
   Descrição - Este programa mostra o tempo de execução da função recursiva que calcula o
   elemento de ordem n da sequência de Fibonacci
*/
#include <stdio.h>
#include <time.h> // aqui estão as declarações de tipos e as funções de
                  // manipulação de data e tempo

double fibonacci(double);

main(){
     double d;        // variável para guardar a diferença entre inicio e fim
     time_t inicio, fim;    // instante inicial e instante final
     double n,termo;        // n = ordem do elemento da sequência de Fibonacci
     n = 20;                // termo = elemento de ordem n
     printf("\n       Calculo do termo de ordem %.0f \n\n",n);

     termo = fibonacci(n);  printf("\n   f(%.0f) = %.0f  \n\n", n,termo);

     printf("\n   Tempo de execucao = %10.15f segundos \n",d);

     printf("\n");
     system("PAUSE");
}

double fibonacci(double n){
    double f;
    if (n < 3) f = 1;
    else {
         f = fibonacci(n-1) + fibonacci(n-2);
         }
    return f;
}
