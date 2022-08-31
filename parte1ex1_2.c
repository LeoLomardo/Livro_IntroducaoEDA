#include <stdio.h>
#include <math.h>

int primo(int n);


int main(){
    primo(3);

    return 0;
}

int primo(int n){
    for(int i = 2; i< sqrt(n); i++){
        if((n % i) == 0)
            return 0 ;
    }

    return 1;
}