#include <stdio.h>

int main() {
    char c;
    printf("ingresa una letra: ");
    scanf("%c", &c);

    //convertir a minuscula "manual" (restando 32 si es mayúscula)
    if (c >= 'A' && c <= 'Z') {
        c = c + 32; // pasar a minuscula 
    }

if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("Es una vocal.\n");
    else if (c >= 'a' && c <= 'z')
        printf("Es una consonante.\n");
    else
        printf("No es una letra.\n");

    return 0;
}


