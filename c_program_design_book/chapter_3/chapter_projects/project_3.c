#include <stdio.h>
#include <math.h>

int main(void)
{
  double temp, speed;

  printf("Enter temperature of air in fehernhit degree >\n");
  scanf("%lf", &temp);

  speed = 1086 * sqrt((5 * temp + 2297) / 2457);
  printf("speed of sound on air at temprtature %.2f F equal to %.2f ft/s\n", temp, speed);

  return (0);
}