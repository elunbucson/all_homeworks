#include <stdio.h>

int main() {
    int suma = 0;


    for (int i = 1; i <= 1000; i++) {
        suma += i;
    }

    
    printf("La suma de los numeros del 1 al 1000 es: %d\n", suma);

    return 0;
}
