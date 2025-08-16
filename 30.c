#include <stdio.h>
int main()
{
  char a;
  char c;
  printf("Enter the character:");

  scanf("%c", &c);
  a = c - 35;
  printf("%c", a);
  return 0;
}