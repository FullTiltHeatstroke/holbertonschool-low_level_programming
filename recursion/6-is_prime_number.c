#include "main.h"



int prime (int a, int b)
{
  if (b * b > a)
    {
    return (1);
    }
  if (a % b == 0)
    return (0);

  return prime (a, b + 1); 
}

int is_prime_number(int n)
{
  if (n <= 1)
    {
      return (0);
    }
  return (prime(n, 2)); 

}
