/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2,tot;
  double avg;

  printf("Enter the marks of first subject : ");
  scanf("%d",&mark1);

  printf("Enter the marks of second subject : ");
  scanf("%d",&mark2);

  tot = mark1 + mark2;
  avg = (double)tot/2;

  printf("Average of the two mark is : %.2lf",avg);

  return 0;
}

