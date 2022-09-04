#include <stdio.h>
#include <math.h>

void deriva(double *poli, int grau, double *out);

int main(){
    double vetor[3] = {12, 2, 3}; // 3x² + 2x + 12
    double saida[3];
    
    deriva(vetor, 2, saida);

    for(int i = 0; i< 3; i++){
        printf("%f ",saida[i]);
    }
    return 0;
}


void deriva(double *poli, int grau, double *out){
    for(int i = 0; i<grau; i++){
        out[i] = poli[grau-i]*(grau-i);

    }

}