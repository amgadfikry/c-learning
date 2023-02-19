/*
In the first version, assume that the data file will be made accessible through input redirection.
In the second version, use a program-controlled input file and a program-controlled output file
*/
#include <stdio.h>
#define FLUID_OUNCES 0.034

double main(void)
{
  int ml;
  double fl_oz;
  FILE *input, *output;
  input = fopen("input.txt", "r");
  output = fopen("output.txt", "w");

  fscanf(input, "%d", &ml);
  fprintf(output, "volume in liters equal to %d\n", ml);
  fl_oz = ml * FLUID_OUNCES;
  fprintf(output, "the amount in ounces equal to %.2f\n", fl_oz);
  fclose(input);
  fclose(output);
  return (0);
}