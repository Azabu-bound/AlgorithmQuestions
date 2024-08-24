/*
Task: Write a function void reverse(char str[]) that reverses a string.
Test: reverse("hello") should modify the string to "olleh".
*/
#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
  char temp = *a;
  *a = *b;
  *b = temp;
}

void reverse(char *str)
{
  int L = 0;
  int R = strlen(str) - 1;

  while (L < R)
  {
    swap(&str[L], &str[R]);
    ++L;
    --R;
  }
}

int main()
{
  char test[] = "Hello";
  printf("Original string: %s\n", test);
  reverse(test);
  printf("Reversed string: %s\n", test);
  return 0;
}