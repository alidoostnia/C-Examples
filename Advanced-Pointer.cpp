#include <iostream>
using namespace std;
 
int main () {
   int  var;
   int  *ptr;
   int  **pptr;
   var = 3000;
   // take the address of var
   ptr = &var;
   // take the address of ptr using address of operator &
   pptr = &ptr;
   // take the value using pptr
   cout << "Value of var :" << var << endl;
   cout << "Value available at *ptr: " << *ptr << endl;
   cout << "Value available at *&ptr: " << *&ptr << endl;
   cout << "Value available at **pptr: " << **pptr << endl;
   cout << "Value available at **&pptr: " << **&pptr << endl;
   cout << "Value available at *pptr: " << *pptr << endl;
   cout << "Value available at pptr: " << pptr << endl;
   cout << "Value available at ptr: " << ptr << endl;

   return 0;
}

//Expected output on my device:
//Value of var :3000
//Value available at *ptr: 3000
//Value available at *&ptr: 0x7ffef6273e94
//Value available at **pptr: 3000
//Value available at **&pptr: 0x7ffef6273e94
//Value available at *pptr: 0x7ffef6273e94
//Value available at pptr: 0x7ffef6273e98
//Value available at ptr: 0x7ffef6273e94

