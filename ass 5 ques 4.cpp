#include<iostream>

using namespace std;

class student{
	public:
		virtual void show()=0;

};

class science:public student{
	public:
		void show(){
			cout<<"science"<<endl;
		}
		};
class art:public student{
	public:
		void show(){
			cout<<"art"<<endl;
		}
	
};
class commerece:public student{
	public:
		void show(){
			cout<<"commerece"<<endl;
		}
	
};

int main(){
	/*
	science ob;
	art ob2;
	commerece ob3;
	
	student *ptr;
	ptr=&ob;
	ptr->show();
	
	student *ptr1;
	ptr1=&ob2;
	ptr1->show();
	
	student *ptr2;
	ptr2=&ob3;
	ptr2->show();
	*/
	/*
	student *ptr[3];
	
	ptr[0]=new science;
	ptr[1]=new art;
	ptr[2]=new commerece;
	
	ptr[0]->show();
		ptr[1]->show();
			ptr[2]->show();
*/
student *ptr[2];

science ob;

ptr[0]=&ob;

ptr[0]->show();


return 0;
}

