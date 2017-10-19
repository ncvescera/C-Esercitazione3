#include <stdio.h>
#include <stdlib.h>

#include "fibonacci.h"

int main() {
  int dim;

  printf("Inserisci un numero: ");
  scanf("%d", &dim);

  int array[dim]; //dichiarazione array

  fibonacci(array,dim);

  //stampa la l'array
  for(int i = 0; i < dim; i++)
    printf("%d ", array[i]);

  printf("\n");

  //seconda parte
  int posizione;

  do {
    printf("Inserisci la posizione: ");
    scanf("%d", &posizione);

    if(posizione >= 1 && posizione <= dim)
      printf("Elemento: %d\n", array[posizione-1]);

  } while(posizione >= 1 && posizione <= dim);

  return(EXIT_SUCCESS);
}
