#include<iostream>

using namespace std;

class property{
	int p_id;
	char p_name[20];
	float p_price;
	public:
		void setdata(int *ptr){
//			int *ptr;
			
			cout<<"enter the values of the above"<<endl;
			cin>>ptr[0];
//			gets();
			cin>>ptr[1];
			
		}
		void getdata(int *ptr){
			cout<<ptr[0]<<endl;
//			puts(p_name);
			cout<<ptr[1]<<endl;
			
		}
	
}p1;

int main(){
	int *ptr;
	 ptr=int new(4);
	p1.setdata(ptr);
	p1.getdata(ptr);
	delete[] ptr;
	
}



