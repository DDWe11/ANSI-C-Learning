//100-999水仙花数
#include <stdio.h>
int main()
{
  int i, t, h, n;
  printf("100-999水仙花数:\n");
  int sum = 0;
  for (n = 100; n <= 999; n++)
  {
    h = n / 100;
    t = (n - h * 100) / 10;
    i = (n - t * 10 - h * 100);

    if (n == i * i * i + t * t * t + h * h * h)
    {
      sum += 1;
      printf("%d\n", n);
    }
  }
  printf("一共有%d个\n", sum);
  return 0;
}