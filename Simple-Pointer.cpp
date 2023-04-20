//This is a simple pointer example for C language. 
#include <stdio.h>
main()
{
  int *p, var; //declaration of the pointer p and the variable var
  var = 5;
  p = &var;
  printf("%d", *p);   // Output: 5
}
