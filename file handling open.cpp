#include<fstream>
#include<iostream>
using namespace std;

int main(){


ifstream ob("a.txt",ios::app);

char c[200];

while(!ob.eof()){


ob.getline(c,200);
cout<<c;

}ob.eof();  
}
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream my_file("testfile", ios::in | 
ios::out);
cout << "The file testfile was opened.\n";
return 0;
}
*/
