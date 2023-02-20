/*
  Write a program to simulate a state police radar gun. The program should take an auto- mobile speed and display the message speeding
  if the speed exceeds 65 mph.
*/

#include <stdio.h>
#define MAX_SPEED 65

int main(void)
{
  int current_speed;

  printf("Enter current speed >\n");
  scanf("%d", &current_speed);

  if (current_speed < MAX_SPEED)
    printf("Your speed is %d and in normal range\n", current_speed);
  else
    printf("your speed is %d and exceed the limits\n", current_speed);

  return (0);
}