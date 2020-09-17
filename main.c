// Author: Christian Jones cpj5199@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int digit_sum(int n) {
  if (n > 0) {
    int digit = n % 10; // Stores Last digit
    n = n / 10;
    return digit + digit_sum(n);
  } else {
    return 0;
  }
}

int main(void) {
  int intMain = atoi(readline("Enter an int: "));
  printf("sum of digits of %d is %d.\n", intMain, digit_sum(intMain));
}

