#include <stdio.h>

int main() {
    char c;
    printf("ingrese una letra minuscula: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z'){
        char mayus = c - 32; // diferencia ASCII minuscula y mayúsculas
        printf("la mayascula es:  %c\n", mayus);
    } else {
        printf("no ingresaste una letra minuscula.\n");
    }

    return 0;
}