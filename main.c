#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Funzione che converte un numero decimale in una numero di una certa base e popola un array con le cifre del numero convertito
 * @param array Array da popolare
 * @param dim   Dimenzione dell'array
 * @param n     Numero decimale
 * @param b     Base
 * @return      0 se la conversione e' andata a buon fine, altrimenti -1
 */
int conversioneBase(int array[], int dim, int n, int b);

int main(int argc, char** argv) {
    int n,b;
    int dim;
    int *array;
    
    printf("Inserisci un numero e una base: ");
    scanf("%d %d",&n, &b);
    
    dim = floor(log(n)/log(b))+1;
    array[dim];
    
    conversioneBase(array,dim,n,b);
    
    for(int i = 0; i < dim; i++)
        printf("%d",array[i]);
    
    return (EXIT_SUCCESS);
}

int conversioneBase(int array[], int dim, int n, int b){
    if(!(n > 0 && b >= 2 && b <= 9))
        return -1;
    
    for(int i = dim-1; i >= 0; i--){
        array[i] = n%b;
        n /= b;   
    }
    
    return 0;
}
