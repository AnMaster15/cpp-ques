#include<iostream>

using namespace std;

class Base { 
 public: 
virtual void show() = 0; }; 
class Derived:public Base { 
public: 
void show()
 { 
cout << "Implementation of Virtual Function in Derived class"; 
 }
}; 
int main() 
{ 
//Base obj; (Compile Time Error)
 Base b;
 Derived d; 
 b = &d; 
 b->show();
  return 0; 
}

