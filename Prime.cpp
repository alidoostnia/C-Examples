//This is an answer to prime factor generation for integer numbers. For example, the output for 12 would be 2 2 3 (the prome factors of 12).

#include <stdio.h>
//The function used for prime facto extraction
void primeFactors(int n)
{
   int i;
   for (i = 2; i <= n; i++) 
   {
      while (n % i == 0) 
      {
         printf("%d ", i);
         n /= i;
      }
   }
}

//The main function.
int main()
{
   int n = 12;
   printf("%d = ", n);
   primeFactors(n);
   return 0;
}
