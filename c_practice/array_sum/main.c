/*
Task: Write a function int array_sum(int arr[], int n) that returns the sum of elements in an array.
Test: Given arr[] = {1, 2, 3, 4}, array_sum(arr, 4) should return 10.
*/
#include <stdio.h>

int array_sum(int arr[], int n)
{
  if (n == 0)
  {
    return 0;
  }

  int sum = 0;
  for (int i = 0; i < n; ++i)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int values[] = {1, 2, 3, 4};
  int result = array_sum(values, 4);
  printf("Result: %d\n", result);
  return 0;
}