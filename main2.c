include "gstio.h"
#include <stdio.h>

int main(void) {
  int f, s, third, fourth, fifth, t, P;
  
  
  printf("To calculate the total marks of 5 subjects.\n");
  f = get_int("Enter marks for the first subject: ");
  s = get_int("Enter marks for the second subject: ");
  third = get_int("Enter marks for the third subject: ");
  fourth = get_int("Enter marks for the fourth subject: ");
  fifth = get_int("Enter marks for the fifth subject: ");
 
  
  t = f + s + third + fourth + fifth;
  printf("The total marks for 5 subjects are %i.\n", t);
  P = (t/500)/100;
    printf("The percentage is  %i.\n", P);
}
