#include "main.h"
  2 #include <stdio.h>
  3
  4 /**
  5  * main - check the code
  6  *
  7  * Return: Always 0.
  8  */
  9 int main(void)
 10 {
 11     int r;
 12
 13     r = is_prime_number(1);
 14     printf("%d\n", r);
 15     r = is_prime_number(1024);
 16     printf("%d\n", r);
 17     r = is_prime_number(16);
 18     printf("%d\n", r);
 19     r = is_prime_number(17);
 20     printf("%d\n", r);
 21     r = is_prime_number(25);
 22     printf("%d\n", r);
 23     r = is_prime_number(-1);
 24     printf("%d\n", r);
 25     r = is_prime_number(113);
 26     printf("%d\n", r);
 27     r = is_prime_number(7919);
