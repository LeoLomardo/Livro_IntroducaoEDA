#include <stdio.h>

int pares(int n, int *vet);

int main(){
    int vetor[3] = {1, 7, 2};

    printf("O vetor de tamanho %d tem %d numeros par", 3, pares(3, vetor));

    return 0;
}

int pares(int n, int *vet){
    int count = 0;

    for(int i = 0; i< n; i++){
        if((vet[i] % 2) == 0){
            count++;
        }
    }
    return count;
}