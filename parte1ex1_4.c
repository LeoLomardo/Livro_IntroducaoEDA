#include <stdio.h>

int soma_impares(int n);

int main(){
    printf("%d", soma_impares(5));

}

int soma_impares(int n){
    int somatorio = 0;

    for(int i = 0; i <= n; i++){
        if(i%2 != 0)
            somatorio = somatorio + i;
    }
    return somatorio;
}