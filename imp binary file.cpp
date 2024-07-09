#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 float height[4] = {12.3, 3.4, 55.6, 
76.8};
 ofstream outfile;
 outfile.open("newfile");
 outfile.write((char *) &height, 
sizeof(height)); //outfile << "hi";
 outfile.close();
 for(int i=0;i<4;i++)
 height[i]=0; //clear
 for(int i=0;i<4;i++)
 cout << height[i] << endl;
 //float newarr[4];
 ifstream infile;
 infile.open("newfile");
 infile.read((char *) &height, 
sizeof(height));
 infile.close();
 for(int i=0;i<4;i++)
 cout << height[i] << endl;
 return 0;
}

