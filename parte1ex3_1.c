#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int negativos(float *vetor, int n);

int main(){
    float vetor[3] = {-1, 7, -2};

 printf("O vetor de tamanho %d tem %d numeros negativos", 3, negativos(vetor, 3));
}
int negativos(float *vetor, int n){
    int contador = 0;

    for(int i = 0; i < n; i++){
        if(vetor[i] < 0){
            contador++;
        }
    }
    return contador;
}
