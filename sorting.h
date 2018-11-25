/*  Algoritmos de ordenação em array
  Arquivo: sorting.h
  Autor: LISBETE MADSEN BARBOSA
  Date: 28/08/15 14:19
  Descrição: alguns algoritmos de ordenação: BubbleSort, SelectionSort, InsertionSort
             e QuickSort
*/

void bubbleSort(int V[],int,int);
void selectionSort(int V[],int,int);
void insertionSort(int V[],int,int);
void quickSort(int V[],int,int);

// Os procedimentos bubbleSort,selectionSort e insertionSort ordenam em ordem não decrescente os elementos de uma lista de números inteiros, 
// que estão armazenados em V da posição p até a posição u 

void bubbleSort(int V[],int p,int u){/* bolha: trocar pares consecutivos fora da ordem */
     int k,j,aux;
     for(k=1; k<=(u-p); k++)
         for(j=p; j<=(u-k); j++)
             if(V[j]>V[j+1]){
                aux = V[j]; V[j] = V[j+1]; V[j+1] = aux;
             }
}
       

void selectionSort(int V[],int p,int u){ /* idéia: localizar o menor e colocar no seu lugar */
     int j,k,aux, fim, m;
     fim = u;
     for(k=1; k<=(u-p); k++){
              m = p;
              for(j=p+1; j<=fim; j++) if (V[j] > V[m]) m = j;
              if (m != fim) {
                    aux = V[m]; V[m] = V[fim]; V[fim] = aux;
              }
              fim = fim -1;
     }
}

void insertionSort(int V[], int p, int u){/* ordenação por inserção */
     int i,k,n,aux;
     n = u-p+1; /* n = quantidade de elementos da lista */
     for(i=1;i<=n-1;i++){   
                          aux = V[i]; k = i-1;
                          while ((k>=0) && (V[k] > aux)) {V[k+1] = V[k]; k = k - 1;}
                          V[k+1] = aux;
     }
}


int separarLista(int V[], int l, int r){
    int pivo = V[l];
    int i = l+1;
    int j = r;  
    int item;           
    while (i <= j) {
          if (V[i] <= pivo) i=i+1;                           
          else if (pivo < V[j]) j=j-1;                       
          else {
               item = V[i];	 V[i] = V[j];	 V[j] = item;                                        
	           i=i+1; j=j-1;
               }                                             
    }                 
    V[l] = V[j];
    V[j] = pivo;
    return j;                                   
}   



void quickSort(int V[], int p, int u){
     int j;
     if (p < u) {
           j = separarLista(V, p, u); 
           quickSort(V, p, j-1); 
           quickSort(V, j+1, u);               
           }
}
