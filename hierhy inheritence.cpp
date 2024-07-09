#include<iostream>

using namespace std;

class number{
	int n;
	public :
		void setdata(){
			cout<<"enter the value of n"<<endl;
			cin>>n;
		}

};

class square:public number{
	//setdata();
	public:
	void getdata(){
		cout<<"the value of square of n is :-"<<n*n;
	}
};
class cube:public number{
	public:
	//setdata();
	void getdata(){
		cout<<"the value of cube is :-"<<n*n*n;
	}
};

int main(){
	square s1;
	cube c1;
	
	s1.setdata();
	s1.getdata();
	
	c1.setdata();
	c1.getdata();
	
	
	


return 0;
}

