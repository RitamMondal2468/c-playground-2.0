#include <stdio.h>

int main()
{
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  if (num > 0)
  {
    printf("The number %d is positive.\n", num);
  }
  else if (num < 0)
  {
    printf("The number %d is negative.\n", num);
  }
  else
  {
    printf("The number is zero.\n");
  }
  return 0;
}