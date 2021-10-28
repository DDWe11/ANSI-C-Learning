//循环控制练习
//1. +-100
//while
#include <stdio.h>
int main()
{
    int i, sum = 0;
    i = 1;
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);

    return 0;
}
