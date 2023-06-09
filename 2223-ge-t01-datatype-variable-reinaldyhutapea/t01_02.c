// 12S22010 - Reinaldy Hutapea
// 12S22048 - Ira Wianda Sari Silalahi

#include <stdio.h>

int main(int _argc, char **_argv)
{
  // codes
float a;
float b;
float c; 
float d;
float e;



scanf("%f ", &a);
scanf("%f", &b);
scanf("%f", &c);
scanf("%f", &d);
scanf("%f", &e);

float f = a + b + c + d + e;
float g = (a + b + c + d + e)/5;

printf("%.3f\n", f);
printf("%.3f", g);

  return 0;
}
