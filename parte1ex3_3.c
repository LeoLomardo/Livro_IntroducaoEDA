#include <stdio.h>

void inverte(int n, int *vet);

int main(){
    int vetor[3] = {1, 2, 3};

    inverte(3, vetor);
    for( int i = 0; i <3; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
void inverte(int n, int *vet){
    int aux = 0;

    for(int i = 0; i < n/2; i++){
        aux = vet[i];
        vet[i] = vet[n-1 -i];
        vet[n-1 -i] = aux;
    }

}

/*
void inverte(int n, int *vet){
    int auxiliar[n];

    for(int i = 0; i < n; i++){
        auxiliar[n-i -1] = vet[i];
    }

    for(int z = 0; z < n; z++){
        vet[z] = auxiliar[z];
    }
}*/



