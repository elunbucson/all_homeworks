#include <stdio.h>


void imprimirHorizontal(int veces) {
    for (int i = 0; i < veces; i++) {
        printf("[?]\n");
    }
}


void imprimirVertical(int veces) {
    for (int i = 0; i < veces; i++) {
        printf("[\n?]\n");
    }
}

int main() {
    int opcion, veces;


    printf("Seleccione una opción:\n");
    printf("1. Imprimir bloque horizontalmente\n");
    printf("2. Imprimir bloque verticalmente\n");
    printf("Opción: ");
    scanf("%d", &opcion);


    printf("¿Cuántas veces desea imprimir el bloque? ");
    scanf("%d", &veces);

    
    if (opcion == 1) {
        imprimirHorizontal(veces);
    } else if (opcion == 2) {
        imprimirVertical(veces);
    } else {
        printf("Opción inválida.\n");
    }

    return 0;
}
