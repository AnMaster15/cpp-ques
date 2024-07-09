#include<iostream>

using namespace std;

class perimeter;
class rectangle{
	int l;
	int b;
	public:
		int setdata(int x,int y){
			l=x;
			b=y;
		}
		friend class perimeter;

};
class perimeter{
	//friend rectangle
	public:
	int detdata( rectangle o1){
		int o3;
		o3=2*(o1.l+o1.b);
		//return o3;
		cout<<o3;
	}
};

int main(){
	rectangle r1;
	perimeter p1;
	r1.setdata(2,3);
	p1.detdata(r1);


return 0;
}

