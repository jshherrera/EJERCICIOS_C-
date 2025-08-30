#include <stdio.h>

int main() {
    double base, resultado = 1.0;
    int exponente, i;

    printf("Ingresa la base: ");
    scanf("%lf", &base);
    printf("Ingresa el exponente (entero): ");
    scanf("%d", &exponente);

    for (i = 0; i < exponente; i++) {
        resultado *= base;
    }

    printf("El resultado de %.2lf ^ %d es: %.6lf\n", base, exponente, resultado);

    return 0;
}
