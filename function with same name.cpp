#include<iostream>

using namespace std;

class a{
	int x;
	double y;
	public:
		void show(int a){
			x=a;
			cout<<a;
		}
		void show(double a){
			y=a;
			cout<<a;
		}

};

int main(){
	a obj;
	obj.show(2);
	obj.show(2.5);


return 0;
}

