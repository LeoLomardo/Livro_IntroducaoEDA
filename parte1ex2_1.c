#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2);

int main(){
    float x1, x2;
    float a = 2;
    float b = 12;
    float c = -14;
    raizes(a, b, c, &x1, &x2);
    printf("%f - %f", x1, x2);
}

int raizes(float a, float b, float c, float *x1, float *x2){
    float delta = 0;

    if(a == 0){
        *x1 = (-c) / (b);
        return 1;
    }

    delta = ((b*b)-4*a*c);
    if(delta < 0){
        printf("Só sei calcular numero complexo no papel, foi mal.");
        return 0;
    }
    delta = sqrt(delta);
    *x1 = (-b + delta)/(2*a);
    if(delta){
        *x2 = (-b - delta)/(2*a);
        return 2;
    }
    return 1;
}