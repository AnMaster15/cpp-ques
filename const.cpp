#include<iostream>

using namespace std;

class complex{
	  int x;
	  int y;
	 public:
	int setdata (int q,int w){
		x=q;
		y=w;
		
	}
	void getdata()const{
		cout<<x<<"+ "<<"i"<<y<<endl;
	}

}s1;

int main(){
	s1.setdata(2,3);
	s1.getdata();
	
	


return 0;
}

