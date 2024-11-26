#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[100];
    int mayor;


    srand(time(NULL));

    printf("Numeros generados:\n");
    for (int i = 0; i < 100; i++) {
        numeros[i] = rand() % 1000;
        printf("%d ", numeros[i]);
    }


    mayor = numeros[0];

    
    for (int i = 1; i < 100; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    printf("\n\nEl numero mayor es: %d\n", mayor);
    return 0;
}
