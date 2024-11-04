#include "main.h"




void reverse_array(int *a, int n)
{ 
  int end = n - 1;
  int start = 0;
  int swap;
  
  while (start < end)
    {
      swap = a[start];
      a[start] = a[end];
      a[end] = swap;
      start++;
      end--;
    }

}
