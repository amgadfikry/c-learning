/*
  Write a program that calculates the distance in kilometers between two locations on the Earth. The program should first call a user-defined function
  that displays a description of its purpose. Then it should prompt the user to enter the latitude and longitude of each lo- cation as a signed angle in
  degrees and minutes. The distance between the two locations (s) can be calculated as
  where r is the Earth’s radius (approximately 6365 km); (f0, l0) represents the latitude and longitude of one location; and (f1, l1) is the other location.
  The formula assumes that lat- itudes and longitudes are in radians, with north latitudes and east longitudes being posi- tive and south latitudes and west
  longitudes being negative. Notice that you will need to convert the latitudes and longitudes to radian values to use the formula shown. For one test,
  calculate the distance between longitude 84° 30’ W, latitude 10° 30’N (Costa Rica) and longitude 71° 5’ W, latitude 42° 24’ N (Boston).

*/
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