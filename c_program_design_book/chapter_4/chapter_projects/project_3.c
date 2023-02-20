/*
  The National Earthquake Information Center has asked you to write a program imple- menting the following decision table to characterize an
  earthquake based on its Richter scale number.
  Could you handle this problem with a switch statement? If so, use a switch statement;
  if not, explain why.
*/

#include <stdio.h>

int main(void)
{
  double scale;

  printf("Enter Earthquake scale number >\n");
  scanf("%lf", &scale);

  if (scale < 5.0)
    printf("little or no damage\n");
  else if (scale >= 5.0 && scale < 5.5)
    printf("some damage\n");
  else if (scale >= 5.5 && scale < 6.5)
    printf("serious damage : walls may cracks or fall\n");
  else if (scale >= 6.5 && scale < 7.5)
    printf("disaster : houses and buildings may collapse\n");
  else
    printf("catastrophe : most building destroyed\n");

  return (0);
}