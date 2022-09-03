#include <stdio.h>
#include <math.h>

double avalia (double *poli, int grau, double x);

int main(){
    double vetor[3] = {1, 1, 1}; // 2x² + 7x + 1

    printf("%lf", avalia (vetor, 2, 3));

    return 0;
}


double avalia (double *poli, int grau, double x){
    double resultado = 0;
    double aux = 0;
    
    for(int i = 0; i < grau ; i++){
        aux = poli[grau]*pow(x,grau - i); 
        resultado += aux;
    }

    return resultado;
}