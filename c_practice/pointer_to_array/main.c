/*
Task: Write a function void increment_elements(int *arr, int n) that increments each element of an array by 1 using pointers.
Test: Given arr[] = {1, 2, 3}, increment_elements(arr, 3) should modify arr[] to {2, 3, 4}.
*/
#include <stdio.h>

void increment_elements(int *arr, int n)
{
  if (n < 1)
  {
    return;
  }

  for (int i = 0; i < n; ++i)
  {
    // Pointer arithmetic
    *(arr + i) += 1;
  }
}

int main()
{
  int numbers[] = {1, 2, 3};
  int length_numbers = sizeof(numbers) / sizeof(numbers[0]);
  increment_elements(numbers, length_numbers);

  for (int i = 0; i < length_numbers; ++i)
  {
    printf("%d\n", numbers[i]);
  }

  return 0;
}