/*
  program to take a depth (in kilometers) inside the Earth as input data; compute and
  print the temperature at this depth in degrees Celsius and degrees Fahrenheit.

*/
#include <stdio.h>

double main(void)
{
  double depth, celsius, fahr;
  printf("enter depth in kilometer >\n");
  scanf("%lf", &depth);
  celsius = (10 * depth) + 20;
  fahr = (1.8 * celsius) + 32;
  printf("temperature in %.2f KM depth equal to %.2f Celsius\n", depth, celsius);
  printf("temperature in %.2f KM depth equal to %.2f Fahernhit\n", depth, fahr);
  return (0);
}