/*
  Write a computer program that computes the duration of a projectile’s flight and its height above ground when it reaches the target. As part of your solution, write and call a function that displays instructions to the program user.
  Problem Constant
  G 32.17 /* gravitational constant
  Problem Inputs
  double theta  input – angle (radians) of elevation  double distance input – distance (ft) to target	 double velocity  input – projectile velocity
  (ft/sec)
  Problem Outputs
  double time	output – time (sec) of flight	 double height  output – height at impact
  Relevant Formulas
  distance time = ————————– velocity × cos (theta)
  g × time2 height = velocity × sin(theta) × time – ————
  Try your program on these data sets.
  Inputs
  Angle of elevation Velocity Distance to target
  Data Set 1
  0.3 radian 800 ft/sec 11,000 ft
  Data Set 2
  0.71 radian 1,600 ft/sec 78,670 ft
*/

#include <stdio.h>
#include <math.h>

#define G 32.17

int main(void)
{
  double theta, distance, velocity;
  double time, height;

  printf("Enter an angle of elevation of projectile >\n");
  scanf("%lf", &theta);
  printf("Enter a distance to target in ft >\n");
  scanf("%lf", &distance);
  printf("Enter a velocity of projectile >\n");
  scanf("%lf", &velocity);

  time = distance / (velocity * cos(theta));
  height = velocity * sin(theta) * time - ((G * pow(time, 2) / 2));

  printf("time of flight = %.2f sec\n", time);
  printf("height at impact = %.2f ft\n", height);

  return (0);
}