#include <stdio.h>
 
int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);


int main(void){
    int x0, y0 = 0;
    int x1, y1 = 5;
    int  x, y = 3;

    printf("%d", dentro_ret(x0, y0, x1, y1, x, y));


    return 0;
}

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
    if(((x>x0)&&(x<x1)) && ((y>y0)&&(y<y1)))
        return 1;
    else
        return 0;
}