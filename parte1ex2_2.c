#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.141517


void calc_esfera(float r, float *area, float *volume);

int main (){
 float area, volume, r = 3.0; 

    calc_esfera(r, &area, &volume);
    printf("A esfera de raio %f tem area %f e volume %f", r, area, volume);
 return 0;
}

void calc_esfera(float r, float *area, float *volume){
    *area = 4 * PI * pow(r,2);
    *volume = (4/3)*PI*pow(r,3);

}