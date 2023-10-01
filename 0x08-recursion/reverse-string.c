#include <stdio.h>
#include <string.h>

/**
 *reversString - will reverse the string which is pointed by s.
 *@str: The string to be reversed.
 *
 *Return: Always 0.
 */
void reverseString(char *str)
{
  int length = strlen(str);
  int start = 0;
  int end = length -1;

  while (start < end)
    {
      char temp = str[start];
      str[start] = str[end];
      str[end] = temp;

      start++;
      end--;
    }
}
