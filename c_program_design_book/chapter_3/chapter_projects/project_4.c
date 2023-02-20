/*
  Write a program that takes a positive number with a fractional part and rounds it to two decimal places. For example,
  32.4851 would round to 32.49, and 32.4431 would round
  to 32.44. (Hint: See Problem 2b in the Self-Check Exercises for Section 3.4.)
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  double number;

  printf("Enter Decimal number you want to round it >\n");
  scanf("%lf", &number);

  printf("rounded number = %.2f\n", number);

  return (0);
}