#include<iostream>

using namespace std;

class complex{
	int real;
	int imag;
	
	public:
		void setdata(){
			cout<<"Enter the values of real and imaginary :- "<<endl;
			cin>>real;
			cin>>imag;
		}
		void putdata(){
			cout<<"the answer is :- "<<real<<" + "<<"i"<<imag<<endl;			
		}
		
		void add(complex a1,complex a2){
			int t1,t2;
			t1=a1.real+a2.real;
			t2=a1.imag+a2.imag;
			//cout<<"the answer is :-"<<obj3<<endl;
			//return t1,t2;
			cout<<t1<<" + "<<"i"<<t2<<endl;
	}
		
		}a3,a4,obj4;
		
		
		int main(){
			a3.setdata();
			a3.putdata();
			
			a4.setdata();
			a4.putdata();
			
			obj4.add(a3,a4);
			//obj4.putdata();
			
			
			
			
		}
