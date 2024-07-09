#include<iostream>

using namespace std;  

void checkcgpa(int cgpa) 
{ 
if(cgpa >= 8) 
throw "very good"; 
if(cgpa >=6 && cgpa < 8) 
throw 'h'; 
if(cgpa >= 4 && cgpa < 6) 
throw 1.0; 
if(cgpa < 4) 
throw 1; 
} 
int main() 
{ 
checkcgpa(2);
try{
	catch (string s){
		cout<<"more than 8"<<endl;
	}
	catch (char c){
		cout<<"between 6 and 8"<<endl;
	}
	catch (double d){
		cout<<"between 4 and 6"<<endl;
	}
	catch (int i){
		cout<<"less than 4"<<endl;
	}

}
}
 
