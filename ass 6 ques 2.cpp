#include<iostream>

using namespace std;

class shape{
	public:
		void area();
		void display();

};
class circle:public shape{
	int r=10;
	public:
		void area(){
			cout<<"the value of area of circle"<<3.14*r*r<<endl;
		}
		void display(){
			cout<<"the shape is circle"<<endl;
		}
};

class rectangle:public shape{
	int l=10;
	int b=20;
	public:
		void area(){
			cout<<"the value of area of rectangle"<<l*b<<endl;
		}
		void display(){
			cout<<"the shape is rectangle"<<endl;
		}
};

class triangle:public shape{
	int b=10;
	int h=20;
	public:
		void area(){
			cout<<"the value of area of triangle"<<(b*h)/2<<endl;
		}
		void display(){
			cout<<"the shape is triangle"<<endl;
		}
};

int main(){
	circle c;
	rectangle r;
	triangle t;
	
	c.area();
	c.display();
	r.area();
	r.display();
	
	t.area();
	t.display();




return 0;
}

