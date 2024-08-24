/*
Task: Write a function int is_prime(int n) that checks if a number is prime.
Test: is_prime(7) should return 1, is_prime(10) should return 0.
*/
#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
  if (n <= 1)
  {
    return 0;
  }

  if (n == 2)
  {
    return 1;
  }

  if (n % 2 == 0)
  {
    return 0;
  }

  for (int i = 3; i <= sqrt(n); ++i)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int numbers[7] = {3, 69, 7, -420, 2, 4, 0};

  for (int i = 0; i < 7; ++i)
  {
    printf("(0) == not prime; (1) == prime:\n");
    printf("Is %d prime? %d\n", numbers[i], is_prime(numbers[i]));
  }

  return 0;
}