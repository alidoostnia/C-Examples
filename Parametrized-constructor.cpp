#include <iostream>
using namespace std;

class integer
{
private:
  int a, b;
public:
  // Parameterized Constructor
  integer(int x, int y)
  {
    a = x;
    b = y;
  };

  int getX()
  {
    return a;
  };

  int getY()
  {
    return b;
  };
};
int main()
{
  integer v(10, 15); // Constructor called

  cout << "***** Parametrized constructor output ***** \na = " << v.getX() << endl; // values assigned by constructor accessed
  cout<< "b = " << v.getY() << endl;

  return 0;
}
