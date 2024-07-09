#include<iostream>

using namespace std;

class time{
	int h,m,s;
	
	public:
		time(int x=0,int y=0,int z=0){
			h=x;
			m=y;
			s=z;
		}
		time operator+(time obj){
			time ob;
			ob.h=obj.h+this->h;
			ob.m=obj.m+m;
			ob.s=obj.s+s;
			return ob;
			
		}
		void show(){
			cout<<h<<" "<<m<<" "<<s;
		}

};

int main(){
	
	time t1(5,15,34);
	time t2(9,53,58);
	time t3;
	
	t3=t1.operator+(t2);
	t3.show();
	
//	cout<<t3;
	


return 0;
}

