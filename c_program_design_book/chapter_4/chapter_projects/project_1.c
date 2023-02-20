/*
  A pharmaceutical engineer is testing out new types of synthetic antibiotics that should kill either one or both of the common classes of bacteria,
  gram-negative and gram-positive bac- teria. Depending on the type of bacteria killed in a sample, the engineer wants to leave dif- ferent lists of
  instructions for a technician who will perform follow-up tests. Write a program that takes as input a character indicating whether an antibiotic
  sample is effec- tive against only gram-negative bacteria ('N'), only gram-positive bacteria ('P'), both classes ('B'), or neither class ('Z').
  The program displays different lists of instructions to a technician based on effectiveness against gram-positive and gram-negative bacteria:
  Gram-positive: Perform standard tests 1 and 5. Record results in notebook #2
  Gram-negative: Perform standard tests 2, 3, and 4. Record results in notebook #3.
  For samples effective on both classes, the program displays both sets of instructions. For samples effective on neither, the program displays Throw away sample.
  Your program should define and call two functions—one to display the gram-positive instructions and one for the gram-negative instructions.
*/

#include <stdio.h>

void gram_negative(void);
void gram_positive(void);

int main(void)
{
  char sample;

  printf("Enter sample indication character >\n");
  scanf("%c", &sample);

  switch (sample)
  {
  case 'N':
    gram_negative();
    break;
  case 'P':
    gram_positive();
    break;
  case 'B':
    gram_positive();
    gram_negative();
    break;
  case 'Z':
    printf("Throw away sample");
    break;
  default:
    printf("you enter wrong sample");
    break;
  }

  return (0);
}

void gram_positive(void)
{
  printf("Gram-positive : ");
  printf("perform standard tests 1 and 5\n");
  printf("record results in notebook #2\n");
};

void gram_negative(void)
{
  printf("Gram-negative : ");
  printf("perform standard tests 2, 3 and 4\n");
  printf("record results in notebook #3\n");
}
