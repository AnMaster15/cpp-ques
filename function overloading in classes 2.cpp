#include<iostream>

using namespace std;

class data{
public:
void print(int i){
	cout<<"print int : "<<i<<endl;
} 

void print (double f) {
	cout<<"printing float : "<<f<<endl;
}
void print(char* c){
	cout<<"print character : "<<c<<endl;
}
};

int main(){
	data d;
	
	d.print(5);
	d.print(3.45);
	d.print("hello");


return 0;
}

