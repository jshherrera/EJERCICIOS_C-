#include <stdio.h>

int main() {
    char c;
    printf("ingrese un caracter: ");
    scanf(" %c",&c);

    if (c >= '0' && c <= '9')
        printf("el caracter '%c' es un digito.n", c);
    else
        printf("el caracter '%c NO es un digito.\n", c);

    return 0;
}