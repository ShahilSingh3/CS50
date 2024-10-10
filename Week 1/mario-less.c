#include <cs50.h>
#include "cs50.c"
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height >= 9);

    for (int i = 0; i < height; i++)
        // Initialising the  row
    {
        for (int j = height - 1; j > i; j--)
            // Inserting (n-1) spaces in the 'i'th row
        {
            printf(" ");
        }
        // then adding # the same no as of the no of row
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        // adding a newline to enter new row
        printf("\n");
    }
}