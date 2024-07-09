#include<fstream>
#include<iostream>
using namespace std;

int main(){

//ofstream ob;
ifstream ob;//only read not 
ob.open("a.txt");
//ob<<"nikal";
char c[200];
//string s;
while(!ob.eof()){

//getline(ob,s);
ob.getline(c,200);//d is ignore
cout<<c;
//cout<<s;
}ob.eof();  
}
