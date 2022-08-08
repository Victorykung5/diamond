#include <stdio.h>
int main()
{
  int a;
  int k = 1;
  printf("Row :");
  scanf("%d", &a);
  if (a > 1 && a <= 74)
  {
    for (int i = 1; i <= a; i++)
    {
      for (int j = 1; j <= a - i; j++)
      {
        printf(" ");
      }
      while (k <= 2 * i - 1)
      {
        printf("*");
        k++;
      }
      k = 1;
      printf("\n");
    }
    int c = 1;
    int b = 2;
    for (int p = a - 1; p >= 0; p--)
    {
      {
        for (int o = 1; o < b; o++)
        {
          printf(" ");
        }
        int o = 0;
      }
      while (c <= 2 * p - 1)
      {
        printf("*");
        c++;
      }
      b++;
      c = 1;
      printf("\n");
    }
  }
  else
    printf("Error!!! Please enter number between 1-74");
  return 0;
}