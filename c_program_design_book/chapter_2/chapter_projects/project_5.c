/*
If a human heart beats on the average of once a second, how many times does the heart
beat in a lifetime of 78 years? (Use 365.25 for days in a year.) Rerun your program for a
heart rate of 75 beats per minute
*/
#include <stdio.h>
#define BEAT_P_MIN 75
#define DAYS_IN_YEARS 365.25

double main(void)
{
  int years;
  double beats_in_life;
  printf("enter your age in years >\n");
  scanf("%d", &years);
  beats_in_life = (((DAYS_IN_YEARS * years) * 24) * 60) * BEAT_P_MIN;
  printf("number of heart beat in %d years is equal to %.2f\n", years, beats_in_life);
  return (0);
}