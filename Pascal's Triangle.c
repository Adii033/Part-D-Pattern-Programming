#include <stdio.h>

int main()
{
    int i, j, rows = 5;
    int coef;

    for (i = 0; i < rows; i++)
    {
        // Print leading spaces
        for (j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        coef = 1;

        // Print Pascal's Triangle values
        for (j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
