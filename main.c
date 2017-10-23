#include <stdio.h>
#include <stdlib.h>
#include "bool.h"
#include "dimOf.h"

bool palindroma(int array[], int dim);

int main(int argc, char** argv) {
    int array_true[]    = {5, 23, 76, 2, 76, 23, 5};
    int array_false[]   = {4, 6, 2, 87, 9, 4};
    
    printf("Risultato 1: %d\n", palindroma(array_true, sizeOfArray(array_true)));
    printf("Risultato 2: %d\n", palindroma(array_false, sizeOfArray(array_false)));
    return (EXIT_SUCCESS);
}

bool palindroma(int array[], int dim){
    bool result = TRUE;
    
    for(int i = 0; i < dim && result; i++){
        if(array[i] != array[(dim-1) - i])
            result = FALSE;
    }
    
    return result;
}
