#include <iostream>
using namespace std;
class base { public: int i; };



class derived1 :  public base {
public: int j; };



class derived2 : public base {
public: int k; };

class derived3 : public derived1, public derived2 
{ public: int sum; };

int main()
{
	//derived1 ob1;
derived3 ob;
ob.derived1::i = 10; // now unambiguous
ob.j = 20;
ob.k = 30;
// unambiguous
ob.sum = ob.derived1::i  + ob.j + ob.k;
// unambiguous
cout << ob.derived1::i  << " ";
cout << ob.j << " " << ob.k << " ";
cout << ob.sum;
return 0;
}
