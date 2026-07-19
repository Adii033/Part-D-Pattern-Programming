#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print stars and inner spaces
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (i == 1 || i == rows || j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
