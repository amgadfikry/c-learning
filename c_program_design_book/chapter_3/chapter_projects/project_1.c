#include <stdio.h>
#include <math.h>

#define PI 3.14
#define EARTH_RADIUS 6365

double degree_to_radius(double num);

int main(void)
{
  double latitude_one, longtiude_one, latitude_two, longtiude_two;
  double part_one, part_two, part_three, distance;

  printf("Enter latitudes of first location >\n");
  scanf("%lf", &latitude_one);
  printf("Enter longitudes of first location >\n");
  scanf("%lf", &longtiude_one);
  printf("Enter latitudes of second location >\n");
  scanf("%lf", &latitude_two);
  printf("Enter longitudes of second location >\n");
  scanf("%lf", &longtiude_two);

  part_one = pow(sin((degree_to_radius(latitude_one) - degree_to_radius(latitude_two)) / 2), 2);
  part_two = cos(degree_to_radius(latitude_two) * cos(degree_to_radius(latitude_one)));
  part_three = pow(sin((degree_to_radius(longtiude_one) - degree_to_radius(longtiude_two)) / 2), 2);
  distance = 2 * EARTH_RADIUS * pow(sin(sqrt(part_one + part_two * part_three)), -1);

  printf("distance in kilometer between two location equal two %.3f KM\n", distance);

  return (0);
}

double degree_to_radius(double num)
{
  return (num * PI / 180.0);
}