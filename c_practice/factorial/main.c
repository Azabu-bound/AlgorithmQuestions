/*
Task: Write a function int factorial(int n) that returns the factorial of n.
Test: factorial(5) should return 120.
*/

#include <stdio.h>

int factorial(int n)
{
  if (n < 1)
  {
    return 1;
  }

  return n * factorial(n - 1);
}

int main()
{
  int value = factorial(5);
  printf("%d\n", value);
  return 0;
}