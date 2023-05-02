#include <iostream>
using namespace std;

class shape
{
  int a, b;
public:
  // Constructor with no argument
  shape()
  {
    a= 2;
    b= 3;
  };
  // constructor with one argument
  shape(int x)
  {
    a=b=x;
  };
  // Constructor with two arguments
  shape(int x, int y)
  {
    a= x;
    b= y;
  };
  int area(void)
  {
    return(a*b);
  };
  void display()
  {
    cout<<"area="<< area() <<endl;
  };
};
int main()
{
  // Constructor Overloading with two different constructors of class name
  shape s1;
  shape s2(6);
  shape s3( 3, 2);

  s1.display();
  s2.display();
  s3.display();
  return 0;
}
