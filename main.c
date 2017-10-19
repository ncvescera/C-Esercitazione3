#include <stdio.h>
#include <stdlib.h>
#include "bool.h"
#include "dimOf.h"

#include "fibonacci.h"

/**
* Funzione che stabilisce se un elemente è contenuto in un array
* @param array array
* @param dim Dimenzione dell'array
* @parma elem Elemento da trovare
* return 1 se l'elemento è contenuto nell'array, altrimenti 0
*/
bool elemInArray(int array[], int dim, int elem);

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

  int numero;
  do{
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if(elemInArray(array, sizeOfArray(array),numero))
      printf("L'elemento %d e' presente\n", numero);
  }while (numero != 0);

  return(EXIT_SUCCESS);
}

bool elemInArray(int array[],int dim, int elem){
  bool result = FALSE;

  for(int i = 0; i < dim; i++)
    if(array[i] == elem)
      result = TRUE;

  return result;
}
