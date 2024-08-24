#include <stdio.h>

int sum(int a, int b)
{
  return a + b;
}

int main()
{
  int x = sum(69, 420);
  printf("%d\n", x);
  return 0;
}