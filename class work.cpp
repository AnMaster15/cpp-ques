#include<iostream>

using namespace std;

class student {
	private:
		int roll_no;
		int marks;
	
	public:
		void getdata(int a ,int b )
		{
			roll_no= a;
			marks=b;
		   	                      //this feature is data extraction
		}};
	/*	void putdata()
		{
			cout<<"roll num is: "<<roll_no<<endl;
			cout<<"marks: "<<marks<<endl;
		 	
		}
		
};*/
void student::getdata(int a,int b){
	
	roll_no =a;                         //scope resolution
	marks =b;
	
}
void student ::putdata(void){
	cout<<"roll no: "<<roll_no<<endl;
	cout<<"marks: "<<marks<<endl;
}



int main(){
	student s1,s2;
	s1.getdata(2,3);   //message passing
	s1.putdata();
	
	s2.getdata(45,34);
	s2.putdata();


return 0;
}

