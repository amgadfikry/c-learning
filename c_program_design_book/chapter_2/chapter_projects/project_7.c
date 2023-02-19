/*
Metro City Planners proposes that a community develop a new water supply by replacing all the community’s
toilets with low-flush models that use only 2 liters per flush. Assume that there is about 1 toilet for
every 3 persons, that existing toilets use an average of 15 liters per flush, that a toilet is flushed on
average 14 times per day, and that the cost to in- stall each new toilet is $150. Write a program that
would estimate the magnitude of the water saved (liters/day) and the cost of this new water supply based
on the community’spopulation
*/
#include <stdio.h>
#define NEW_TOILET_LT_CONSUM 2
#define COST_OFNEW_TOILET 150
#define OLD_TOILET_LT_CONSUM 15

double main(void)
{
  double person_per_toilet = 3;
  double average_flush_in_day = 14;
  double number_population, old_water_p_comunnity, new_water_p_community, water_saved,
      number_of_toilets, cost_of_new_toilets;

  printf("enter number of population in community >\n");
  scanf("%lf", &number_population);
  number_of_toilets = number_population / person_per_toilet;
  old_water_p_comunnity = (number_of_toilets * average_flush_in_day) * OLD_TOILET_LT_CONSUM;
  new_water_p_community = (number_of_toilets * average_flush_in_day) * NEW_TOILET_LT_CONSUM;
  water_saved = old_water_p_comunnity - new_water_p_community;
  cost_of_new_toilets = COST_OFNEW_TOILET * number_of_toilets;
  printf("old style toilets in city consume %.2f lt per day\n", old_water_p_comunnity);
  printf("and new style toilets will consume %.2f lt per day\n", new_water_p_community);
  printf("saved water is %.2f\n", water_saved);
  printf("this project will cost %.2f dollar to change all toilets in community\n", cost_of_new_toilets);
  return (0);
}