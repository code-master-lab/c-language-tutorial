#include <stdio.h>
int main()
{

  int n;
  printf(" enter a no of row :");
  scanf("%d", &n);
  // A B C D
  // A B C D
  // A B C D
  // A B C d
  for (int i = 1; i <= n; i++)
  {
    int a = 1;
    for (int j = 1; j <= i; j++)
    {

      int d = a + 64;    // d = 65
      char ch = (char)d; // ch = (char)65 -> ch = "A"   // typecasting use here
      printf("  %c", ch);
      a++;
    }
    printf("\n");
  }
  return 0;
}