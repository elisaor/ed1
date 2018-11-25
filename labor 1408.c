#include <stdio.h>

// interface
	void mostrarArray(int ,int , int V[]);

main(){
	...
	// chamada da função mostrarArray
	...
}

// implementação
	void mostrarArray(int p,int q, int V[]){
	int k;
	for(k=p; k<=q;k++)  printf(" %d-%d ", k,V[k]);
	printf("\n\n");
}
