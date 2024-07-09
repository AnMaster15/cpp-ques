#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 fstream dataFile;
 char name[81]; //buffer
 dataFile.open("myfile", ios::in); //read mode
 if (!dataFile)
 cout << "File open error!" << endl;
 else
 cout << "file opened successfully.\n";
 cout << "Reading information from the file" << endl;
 while(!dataFile.eof()) //true
 {
 dataFile.getline(name,80);
 cout << name;
 }
 dataFile.close();
 cout << "Reading information from the file one more time" << endl;
 dataFile.open("myfile", ios::in);
 while(dataFile) //0
 {
 dataFile.getline(name,80);
 cout << name;
 }
return 0;
}
