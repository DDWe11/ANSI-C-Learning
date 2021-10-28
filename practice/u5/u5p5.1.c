#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
        printf("%4d", i);
    printf("\n----------------------------------------\n");

    for (i = 1; i < 10; i++)

    {
        for (j = 1; j <= i; j++)
            printf("%4d", j * i);
        printf("\n");
    }

    return 0;
}
