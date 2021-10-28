//input the scores and divide the level A,B,C,D,E
#include <stdio.h>
int main()
{
  int x; //input the scores
  printf("please input the scores:");
  scanf("%d", &x);
  if (x >= 90)
  printf("The grades is A\n");
  else if (x >= 80 && x < 90)
  printf("The grades is B\n");
  else if (x >= 70 && x < 80)
  printf("The grades is C\n");
  else if (x >= 60 && x < 70)
  printf("The grades is D\n");
  else if(x<60)
  printf("The grades is E\n");
  return 0;
}