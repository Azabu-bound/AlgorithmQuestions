/*
Task: Write a function int fibonacci(int n) that returns the n-th Fibonacci number.
Test: fibonacci(7) should return 13.
*/
#include <stdio.h>

int fibonacci(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
  int value = fibonacci(7);
  int value2 = fibonacci(10);
  printf("Value: %d\nValue2: %d\n", value, value2);
  return 0;
}