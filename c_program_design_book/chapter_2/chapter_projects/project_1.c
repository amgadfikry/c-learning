/*
program to convert a volume in milliliters to fluid ounces
*/
#include <stdio.h>
#define FLUID_OUNCES 0.034

double main(void)
{
  int ml;
  double fl_oz;
  printf("enter volume in mllilitres >\n");
  scanf("%d", &ml);
  fl_oz = ml * FLUID_OUNCES;
  printf("the amount in ounces equal to %.2f\n", fl_oz);
  return (0);
}