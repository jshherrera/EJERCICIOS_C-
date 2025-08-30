#include <stdio.h>

int main() {
    double num;

    printf("Ingresa un numero: ");
    scanf("%lf", &num);

    if (num > 0)
        printf("El numero es positivo.\n");
    else if (num < 0)
        printf("El numero es negativo.\n");
    else
        printf("El numero es cero.\n");

    return 0;
}
