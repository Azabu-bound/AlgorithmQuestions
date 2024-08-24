/*
Task: Write a function int find_max(int arr[], int n) that finds the maximum element in an array.
Test: Given arr[] = {1, 4, 2, 8, 5}, find_max(arr, 5) should return 8.
*/
#include <stdio.h>

int find_max(int arr[], int n)
{

  if (n == 0)
  {
    return 0;
  }

  int max = arr[0];
  for (int i = 1; i < n; ++i)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int main()
{
  int numbers[] = {1, 4, 2, 8, 5};
  int length_numbers = sizeof(numbers) / sizeof(numbers[0]);
  int result = find_max(numbers, length_numbers);
  printf("The max value is: %d\n", result);
  return 0;
}