/* Exemplo de uso da fun��o time */
/* Arquivo: template fiboncci Recursivo.c
   Autor: PATO DONALD
   Data: 28/08/16 15:54
   Descri��o - Este programa mostra o tempo de execu��o da fun��o recursiva que calcula o
   elemento de ordem n da sequ�ncia de Fibonacci
*/
#include <stdio.h>
#include <time.h> // aqui est�o as declara��es de tipos e as fun��es de
                  // manipula��o de data e tempo

double fibonacci(double);

main(){
     double d;        // vari�vel para guardar a diferen�a entre inicio e fim
     time_t inicio, fim;    // instante inicial e instante final
     double n,termo;        // n = ordem do elemento da sequ�ncia de Fibonacci
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
