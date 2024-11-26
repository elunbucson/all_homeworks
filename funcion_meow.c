#include <stdio.h>

// Declaración de la función
void imprimirMeow(int inicio, int fin);

int main() {
    int inicio, fin;


    printf("Ingrese el rango de inicio: ");
    scanf("%d", &inicio);
    printf("Ingrese el rango final: ");
    scanf("%d", &fin);


    if (inicio > fin) {
        printf("El rango no es valido. El inicio debe ser menor o igual al final.\n");
    } else {

        imprimirMeow(inicio, fin);
    }

    return 0;
}


void imprimirMeow(int inicio, int fin) {
    int cantidad = fin - inicio + 1;
    printf("Se imprimira 'Meow' %d veces:\n", cantidad);

    for (int i = 0; i < cantidad; i++) {
        printf("Meow\n");
    }
}
