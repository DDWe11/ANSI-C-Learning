#include<stdio.h>
void main()
{
char a,b;
printf("请输入两个字母:\n");
scanf("%c%c",&a,&b);
printf("%c %d %d\n",a^32,a^32,b);
}