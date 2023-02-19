/*
program that takes the length and width of a rectangular yard and the length and
width of a rectangular house situated in the yard. Your program should calculate and dis-
play the time required to cut the grass at the rate of two square feet a second
*/
#include <stdio.h>
#define SQUARE_F_P_SEC 2

double main(void)
{
  double yard_width, yard_length, house_width, house_length, grass_space, time_require;
  printf("enter width of yard in square feet >\n");
  scanf("%lf", &yard_width);
  printf("enter length of yard in square feet >\n");
  scanf("%lf", &yard_length);
  printf("enter width of house in square feet >\n");
  scanf("%lf", &house_width);
  printf("enter length of house in square feet >\n");
  scanf("%lf", &house_length);
  grass_space = (yard_width * yard_length) - (house_width * house_length);
  if (grass_space < 0)
  {
    printf("the house larger than yard\n");
  }
  else if (grass_space == 0)
  {
    printf("there is no grass in yard, house space equal to yard space\n");
  }
  else
  {
    time_require = grass_space * SQUARE_F_P_SEC;
    printf("the time need to cut grass in yard is equal to %.2f second\n", time_require);
  }
  return (0);
}