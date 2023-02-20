/*
  Los Angeles sometimes has very smoggy conditions. These conditions are largely due to L.A.’s location between mountain ranges,
  coupled with prevailing winds off the ocean that tend to blow pollutants from the city’s many automobiles up against the mountains.
  Three components of smog—ozone, nitrogen dioxide, and carbon monoxide—are a particular health concern. A pollutant hazard index has
  been developed for each of the three primary irritants. If any index rises above 100, the air is listed as “unhealthful” in forecasts
  to Los Angeles residents. If the index for any one of the three rises above 200, a “first-stage smog alert” is issued and certain
  activities are restricted in the affected part of the Los Angeles basin. If an index goes over 275, a “second-stage alert” is
  called and more severe restric- tions apply. Write a program that takes as input the daily hazard index for each of the three
  pollutants and that identifies unhealthful or first- or second-stage alert situations.
*/

#include <stdio.h>

int main(void)
{
  int smog_ozone, nitrogen_dioxide, carbon_monoxide;

  printf("Enter index value of smog_ozone >\n");
  scanf("%d", &smog_ozone);
  printf("Enter index value of nitrogen_dioxide >\n");
  scanf("%d", &nitrogen_dioxide);
  printf("Enter index value of carbon_monoxide >\n");
  scanf("%d", &carbon_monoxide);

  if (smog_ozone > 275 || nitrogen_dioxide > 275 || carbon_monoxide > 275)
    printf("second stage alert");
  else if ((smog_ozone < 275 && smog_ozone > 200) || (nitrogen_dioxide < 275 && nitrogen_dioxide > 200) || (carbon_monoxide < 275 && carbon_monoxide > 200))
    printf("first stage alert");
  else if ((smog_ozone < 200 && smog_ozone > 100) || (nitrogen_dioxide < 200 && nitrogen_dioxide > 100) || (carbon_monoxide < 200 && carbon_monoxide > 100))
    printf("unhealthful");
  else
    printf("normal range");

  return (0);
}