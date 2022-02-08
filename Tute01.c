/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

float sub1, sub2;// variables for marks of the two subjects


int main() {

  printf( "Enter the marks of subject 1: " ); // prompt
  scanf( "%f", &sub1 ); // input

  printf( "Enter the marks of subject 2: " ); // prompt
  scanf( "%f", &sub2 ); // input

  printf( "The average of the two marks: %.2f", ( sub1 + sub2 ) / 2 ); // output
  
  return 0;
}

