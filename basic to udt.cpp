#include<iostream>

using namespace std;

class a{
	float var;
	public:
		a(float d){
			cout<<"constructor"<<endl; 
			var=d*2;
		}
		void show(){
			cout<<"value of var ="<<var;
		}

};

int main(){
	a ob(5.5);//user
	float d=9.6;//basic
	ob=d;
	ob.show();


return 0;
}

