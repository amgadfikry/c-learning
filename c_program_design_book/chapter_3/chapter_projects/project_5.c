/*
  Write a program that estimates the temperature in a freezer (in °C) given the elapsed time
  (hours) since a power failure. Assume that this temperature (T) is given by
  4t2 T=—— – 20
  where t is the time since the power failure. Your program should call a user-defined func- tion that displays a
  description of the program’s purpose and should then prompt the user to enter how long it has been since the start of the power
  failure in whole hours and min- utes. Note that you will need to convert the elapsed time into hours. For example, if the user
  entered 2 30 (2 hours 30 minutes), you would need to convert this to 2.5 hours
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  double temp, time_hours, time_mins, time_all;

  printf("Enter time since start power failure hours follow space then minutes >\n");
  scanf("%lf %lf", &time_hours, &time_mins);

  time_all = time_hours + (time_mins / 60);
  temp = ((4 * pow(time_all, 2)) / (time_all + 2)) - 20;
  printf("temperature after %.0f hours and %.0f mins is %.2f celesius\n", time_hours, time_mins, temp);

  return (0);
}