#include <stdio.h>
#include <stdlib.h>

int main() {
    int veces;
    char buffer[100];


    while (1) {
        printf("¿Cuántas veces desea imprimir 'Meow'? ");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
            if (sscanf(buffer, "%d", &veces) == 1 && veces > 0) {
                break;
            }
        }
        printf("Entrada inválida. Por favor, ingrese un número entero positivo.\n");
    }

    
    for (int i = 0; i < veces; i++) {
        printf("Meow\n");
    }

    return 0;
}
