#include<iostream>

using namespace std;

class Animal{
public: 
virtual void sound() = 0;
void sleeping() {cout<<"Sleeping"; }
};
class Dog: public Animal{
public:
void sound() {cout<<"Woof"<<endl;}
};

int main(){ 
   Animal *obj;
   Dog ob1;
   obj=&ob1;
   obj->sound();
}

