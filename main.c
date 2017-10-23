#include <stdio.h>
#include <stdlib.h>
#include "dimOf.h"
#include "bool.h"

double media(double array[], int dim);
bool  mediaInElem(double array[], int dim);

int main(int argc, char** argv) {
    double array_true[]     = {1.2, 2.5, 3.8};
    double array_false[]    = {1.2, 5.7, 2.4};
    
    printf("Risultato 1: %d\n",mediaInElem(array_true,sizeOfArray(array_true)));
    printf("Risultato 2: %d\n",mediaInElem(array_false,sizeOfArray(array_false)));
    
    return (EXIT_SUCCESS);
}

double media(double array[], int dim){
    double media = 0;
    
    for(int i = 0; i < dim; i++)
        media += array[i];
    
    media /= dim;
    
    return media;
}

bool  mediaInElem(double array[], int dim){
    bool result = FALSE;
    double media_val = media(array, dim);
    
    for(int i = 0; i < dim && !result; i++){
        if(array[i] == media_val)
            result = TRUE;
    }
    
    return result;
}