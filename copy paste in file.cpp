#include<fstream>
#include<iostream>
using namespace std;

int main(){

//ofstream ob;
ifstream ob("a.txt");
//ob<<"hello";
ofstream ob1("b.txt");
char c;


while(!ob.eof()){
	
	//ob1<<c;
ob1.put(c);
	ob.get(c);
}
ob.close();
ob1.close();
}
