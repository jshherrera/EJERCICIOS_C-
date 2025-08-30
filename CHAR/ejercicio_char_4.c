#include <stdio.h>

int main() {
    char palabra[100], letra;
    int i = 0, contador = 0;

    printf("ingrese una palabra: ");
    scanf(" %s", palabra);

    printf("ingrea la letra a buscar: ");
    scanf(" %c", &letra);

    while (palabra[i] != '\0') {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    printf("la letra '%c aparece %d veces en la palabra %s.\n",letra, contador, palabra );

    return 0;
}