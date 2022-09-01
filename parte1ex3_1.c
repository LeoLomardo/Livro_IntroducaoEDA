#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int negativos(float *vetor, int n);

int main(){
    float vetor[3]; 
    vetor[0] =-1.0;
    vetor[1] = 2.0;
    vetor[2] = -12.0;
 printf("O vetor de tamanho %d tem %d numeros negativos", 3, negativos(&vetor, 3));
}
int negativos(float *vetor, int n){
    int i, contador = 0;

    for(i ; i<n; i++){
        if(vetor[i] < 0)
            contador++;
    }

    return contador;
}
