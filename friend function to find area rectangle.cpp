#include<iostream>
#include<cmath>
using namespace std;
class triangle;
class rectangle{
	int length;
	int breadth;
	int a1;
	char color[10];
	public:
		void setdata(){
			cout<<"Length,breadth : "<<endl;
			cin>>length;
			cin>>breadth;
			fflush(stdin);
			cout<<"Color :"<<endl;
			gets(color);
	}
		 getdata(){
			
		}
	friend void sum(rectangle ob1,triangle ob2);
		void area(){
			cout<<"l,b :"<<length<<breadth<<endl;
		a1=(length)*(breadth);
cout<<"rec :"<<a1;
//		a1=5;
	}
//		friend void sum(rectangle ob1,triangle ob2);
}r1,r2;

class triangle{
	int s1,s2,s3;
	int a2,sum1;
	char color[10];
	public:
		void setdata(){
			cout<<"Sides :"<<endl;
			cin>>s1>>s2>>s3;
			fflush(stdin);
				cout<<"Color :"<<endl;
			gets(color);
	}
//	void triangle(){
//		color='green';
//	}

	void area(){
		int s;
		s=(s1+s2+s3)/2;
		cout<<"s1 :"<<s1<<endl;
		cout<<"s2 :"<<s2<<endl;
		cout<<"s3 :"<<s3<<endl;
		cout<<"s :"<<s<<endl;
		int d1,d2,d3,s4,s5,s6;
		
//		s1=3;s2=6;s3=9;
		d1=s-s1;
		d2=s-s2;
		d3=s-s3;
    	a2 = ((s)*(d1)*(d2)*(d3));
    	cout<<"tri :"<<a2<<endl;
//    	a2=10;
//	sum(a1,a2);
		}
			friend void sum(rectangle ob1,triangle ob2);
}t1,t2;
 void sum(rectangle ob1,triangle ob2){
	int sum1;
	sum1 = ob1.a1+ob2.a2;
	cout<<"The Value of Sum of area of Two Shapes is : "<<sum1<<endl;
}
int main(){
	t1.setdata();
  	r1.setdata();
  	r1.area();
	t1.area();
	sum(r1,t1);

	
	
}

