#include<iostream>

using namespace std;

class hero{
	
	int l;
	int b;
	
	public: 
	
	void getdata(){
		cout<<"Enter the values of length and breadth:- "<<endl;
		cin>>l;
		cin>>b;
		
	}
	void putdata(int x,int y){
		l=x;
		b=y;
		
		//cout<<A<<endl;
		//cout<<p<<endl;
		
	}
	void area(){
		int A;
		cout<<"the value of area is:- "<<endl;
		A=l*b;
		cout<<A<<endl;
		
	}
	void perimeter(){ 
		int p;
		cout<<"the value of perimeter is:- "<<endl;
		p=2*(l+b);
		cout<<p<<endl;
	}	
}h1;

int main(){
	
	h1.putdata(2,3);
	h1.area();
	//h1.putdata();
	h1.perimeter();
	//h1.putdata();
//	cout<<"the size of hero:-"<<sizeof(h1);

//cout<<h1.heath;

	
	
}
