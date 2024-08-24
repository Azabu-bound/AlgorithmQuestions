/*
Task: Write a function int string_length(char str[]) that returns the length of a string.
Test: string_length("hello") should return 5.
*/
#include <stdio.h>

int string_length(char str[])
{
  if (str == NULL)
  {
    return 0;
  }

  int length = 0;
  while (str[length] != '\0')
  {
    ++length;
  }
  return length;
}

int main()
{
  char message[] = "Hello";
  int result = string_length(message);
  printf("The length of %s is %d\n", message, result);
  return 0;
}