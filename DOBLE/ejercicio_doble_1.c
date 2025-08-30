#include <stdio.h>

int main(){
    int i, n = 1000;
    double pi = 0.0, signo = 1.0;

    for (i = 0; i < n; i++){
        pi += signo / (2.0 * i + 1.0);
        signo = -signo;
    }

    pi *= 4.0;
    printf("valor aproximado de pi con  %d terminos :  %.15lf\n", n, pi);

    return 0;
    
}

