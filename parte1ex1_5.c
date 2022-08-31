#include <stdio.h>
#include <math.h>

double pi(int n);

int main(){

printf("%f",pi(5000));

    return 0;
}

double pi(int n){
    double somatorio,pi = 0;

    for(int i = 0; i <= n; i++){
        somatorio = somatorio + (pow(-1,i)/((2*i)+1));
    }
    pi = 4*somatorio;
    
    return pi;
}