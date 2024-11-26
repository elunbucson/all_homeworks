#include <stdio.h>
#include <cs50.h>

void print_stairs(int number);

int main (void)
{
    int matrix = get_int("Introduce el número de escalones:");
    print_stairs(matrix);
}

void print_stairs(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
