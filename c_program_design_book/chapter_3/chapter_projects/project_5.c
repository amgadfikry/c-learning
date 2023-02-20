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