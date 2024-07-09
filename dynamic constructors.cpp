#include<iostream>

using namespace std;

class bank{
	int principle;
	int years;
	int rate;
	int valueR;
	public:
		bank(){
			
		}
		bank(int p,int y, float r){
			principle=p;
			years=y;
			rate=r ; 
			valueR=principle;
			for(int i=0;i<y;i++){
				valueR=valueR*(1+r);
			}
		}
			bank(int p,int y, int R){
			principle=p;
			years=y;
			rate=float(R)/100; 
			valueR=principle;
			for(int i=0;i<y;i++){
				valueR=valueR*(1+R);
			}
			
		
		}
		void show(){
			cout<<"principle amount was"<<principle
			<<",return value after"<<years
			<<"is"<<valueR<<endl;
		}
	};
		int main(){
			bank b1,b2;
			int p,y;
			float r;
			int R;
			
			cout<<"enter the value of p y and r"<<endl;
			cin>>p>>y>>r;
			b1=bank(p,y,r);
			b1.show();
			
			cin>>p>>y>>R;
			b2=bank(p,y,R);
			b2.show();

		}
		

