#include <stdio.h>

int main() {
    float radio, area;
    float pi = 3.1416;

    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);

    area = pi * radio * radio;

    printf("El area del circulo es: %.4f\n", area);

    return 0;
}
