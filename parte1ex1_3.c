#include <stdio.h>

int fibonacci(int n);

int main(){

    printf("%d", fibonacci(7));
}

int fibonacci(int n){
    int atual = 1;
    int anterior = 1;
    int proximo = 0;

    for(int i = 3; i<=(n); i++){
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }
    return atual;
}