#include <stdio.h>

int main() {
    float a, b, c, promedio;

    printf("Ingresa el primer numero: ");
    scanf("%f", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &b);
    printf("Ingresa el tercer numero: ");
    scanf("%f", &c);

    promedio = (a + b + c) / 3;

    printf("El promedio es: %.3f\n", promedio);

    return 0;
}
