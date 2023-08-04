#include <stdio.h>
int product_two_num (int m, int n)
{
  int product;
  product = m*n;
  return product;
}
int main ()
{
  int answer;
  answer = product_two_num(167, 789);
  printf("The product of 167 and 789 is %d.\n", answer);
  return 0;
}
