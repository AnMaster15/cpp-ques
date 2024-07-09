#include<fstream>
#include<iostream>
using namespace std;

int main(){
	
ifstream ob("dfusdjfsb.txt");

if(!ob){
	cout<<"file doesnt exist";
	return 1;
}
char c;

while(!ob.eof()){
	 cout<<c;
	 ob.get(c);
}
ob.close();
}
