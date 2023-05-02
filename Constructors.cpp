#include <iostream>
using namespace std;

class integer
{
public:
  int x, y;

// Default Constructor
  integer()
  {
    x = 45;
    y = 10;
  }

};

int main()
{
  // Default constructor called automatically when the object is created
  integer a;
  cout << "**** Default constructor example output **** \nx: " << a.x << endl << "y: " << a.y;
  return 0;
}
