// 12S22010 - Reinaldy Hutapea
// 12S22048 - Ira Wianda Sari Silalahi

#include <stdio.h>

int main(int _argc, char **_argv)
{
  // codes
  int x;
  int y;
  int z;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

  int  left_shift = x << y;
  int  equality_operation = left_shift == z;

  printf("%d\n", left_shift);
  printf("%d", equality_operation);


  return 0;
}
