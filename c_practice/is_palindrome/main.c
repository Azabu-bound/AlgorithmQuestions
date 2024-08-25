/*
Task: Write a function int is_palindrome(char str[]) that checks if a string is a palindrome.
Test: is_palindrome("radar") should return 1, is_palindrome("hello") should return 0.
*/
#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
  int length = strlen(str);

  if (length == 0)
  {
    return 1;
  }
  int L = 0;
  int R = length - 1;

  while (L <= R)
  {
    if (str[L] != str[R])
    {
      return 0;
    }
    ++L;
    --R;
  }
  return 1;
}

int main()
{
  char word[] = "civic";
  char word2[] = "sword";
  int res = is_palindrome(word);
  int res2 = is_palindrome(word2);
  printf("%d\n", res);
  printf("%d\n", res2);
  return 0;
}