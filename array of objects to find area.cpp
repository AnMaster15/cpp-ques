#include<iostream>
#include<conio.h>

using namespace std;

class rectangle{
	int l;
	int b;
	public:
		int setdata(int x,int y){
			
			l=x;
			b=y;
		}
		void getdata(){
			cout<<"the values of areas of rectangle is:-"<<l*b<<endl;
		}

};


int main(){
	//clrscr();
	//rectangle ob;
	
	
	rectangle  ob[2];
//	{setdata(4,6),setdata(5,8)};
for(int i=0;i<2;i++){
	int a,b;
	cin>>a>>b;
		ob[i].setdata(a,b);
	}
	for(int i=0;i<2;i++){
		ob[i].getdata();
	}
	


return 0;
}

