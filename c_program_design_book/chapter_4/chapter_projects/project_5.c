/*
  Write a program that takes the x–y coordinates of a point in the Cartesian plane and dis- plays a message telling either an axis on which
  the point lies or the quadrant in which it is found.
  Sample lines of output:
  (–1.0, –2.5) is in quadrant III (0.0, 4.8) is on the y axis
*/

#include <stdio.h>

int main(void)
{
  double x, y;

  printf("Enter of value in x axis >\n");
  scanf("%lf", &x);
  printf("Enter of value in y axis >\n");
  scanf("%lf", &y);

  if (x == 0)
    printf("(%.1f , %.1f) is on x axis\n", x, y);
  else if (y == 0)
    printf("(%.1f , %.1f) is on y axis\n", x, y);
  else if (x > 0 && y > 0)
    printf("(%.1f , %.1f) is on quadrant 1\n", x, y);
  else if (x < 0 && y > 0)
    printf("(%.1f , %.1f) is on quadrant 2\n", x, y);
  else if (x < 0 && y < 0)
    printf("(%.1f , %.1f) is on quadrant 3\n", x, y);
  else
    printf("(%.1f , %.1f) is on quadrant 4\n", x, y);

  return (0);
}