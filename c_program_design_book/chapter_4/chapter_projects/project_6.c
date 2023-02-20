/*
  Write a program that reports the contents of a compressed-gas cylinder based on the first letter of the cylinder’s color.
  The program input is a character representing the observed color of the cylinder: 'Y' or 'y' for yellow, 'O' or 'o' for orange, and so on.
  Cylinder colors and associated contents are as follows:
  orange brown yellow green
  ammonia carbon monoxide hydrogen oxygen
*/

#include <stdio.h>

int main(void)
{
  char gas_char;

  printf("Enter gas cylinder Char >\n");
  scanf("%c", &gas_char);

  switch (gas_char)
  {
  case 'Y':
  case 'y':
    printf("content of gas cylinder is hydrogen\n");
    break;
  case 'O':
  case 'o':
    printf("content of gas cylinder is ammonia\n");
    break;
  case 'B':
  case 'b':
    printf("content of gas cylinder is carbon monoxide\n");
    break;
  case 'G':
  case 'g':
    printf("content of gas cylinder is oxygen\n");
    break;
  default:
    printf("not recognized color\n");
    break;
  }

  return (0);
}