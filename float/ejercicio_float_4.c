#include <stdio.h>

int main() {
    float x, y;

    printf("Ingresa el primer numero: ");
    scanf("%f", &x);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &y);

    if (x > y)
        printf("%.3f es mayor que %.3f\n", x, y);
    else if (x < y)
        printf("%.3f es menor que %.3f\n", x, y);
    else
        printf("Ambos numeros son iguales.\n");

    return 0;
}
