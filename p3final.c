#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter the values:\n");
  scanf("%d", &n);
  return n;
}

int is_prime(int n)
{
  for(int i=2; i<=n/2; i++)
  {
    if(n%i == 0)
    return 1;
  }
  return 0;
}

void output(int n, int prime)
{
    if(prime == 0)
  printf("%d is a Prime number!\n", n);
    else
  printf("%d is NOT a Prime number!\n", n);
}

int main()
{
  int n = input_number();
  int prime = is_prime(n);
  output(n, prime);
  return 0;
}