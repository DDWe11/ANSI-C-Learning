//100以内可以被5整除的数之和
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum=%d\n", sum);
    return 0;
}