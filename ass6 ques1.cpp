#include<iostream>

using namespace std;

class polygon{
	public:
	int width;
	int height;
	public:
		void set_value(){
			cin>>width;
			cin>>height;
		}

};
class rectangle:public polygon{
	public:
		void calculate_area(){
			cout<<"area of rectangle"<<width*height<<endl;
		}
};
class triangle:public polygon{
	public:
		void calculate_area(){
			cout<<"area of triangle"<<(width*height)/2<<endl;
		}
};

int main(){
	polygon *ptr,*ptr1;
	triangle t;
	rectangle r;
//	p.set_value();
	ptr=&r;
	ptr1=&t;
	
	ptr->set_value();
	r.calculate_area();
	ptr1->set_value();
	t.calculate_area();



return 0;
}

