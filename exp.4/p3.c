#include <stdio.h>
int main()
{
    char c1,c2;
    c1=getchar();
    c2=c1-32;
    putchar('\n');
    putchar('\'');
    putchar(c2);
    putchar('\'');
    return 0;
}
