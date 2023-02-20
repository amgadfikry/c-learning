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