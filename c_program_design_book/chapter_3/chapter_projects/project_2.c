#include <stdio.h>
#include <math.h>

#define G 32.17

int main(void)
{
  double theta, distance, velocity;
  double time, height;

  printf("Enter an angle of elevation of projectile >\n");
  scanf("%lf", &theta);
  printf("Enter a distance to target in ft >\n");
  scanf("%lf", &distance);
  printf("Enter a velocity of projectile >\n");
  scanf("%lf", &velocity);

  time = distance / (velocity * cos(theta));
  height = velocity * sin(theta) * time - ((G * pow(time, 2) / 2));

  printf("time of flight = %.2f sec\n", time);
  printf("height at impact = %.2f ft\n", height);

  return (0);
}