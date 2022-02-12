/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, total = 0;
  float average;

  printf("input marks for subject 1: ");
  scanf("%d", &mark1);

  printf("input marks for subject 2: ");
  scanf("%d", &mark2);

  total = mark1 + mark2;
  average = total/2.0;

  printf("The average of subjects is %.2f", average);
  
  return 0;
}

