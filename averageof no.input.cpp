#include <iostream>
using namespace std;
int main(){
	int a,b;
	float  c,d=0;
	do{
	cout <<"Enter The Number :";
	cin>>a;
	cout <<"Enter -1 for exit and Enter any no. for continue :";
	cin>>b;
	if(b==-1){
		cout<<"The average of no. is "<<c/d;
		break;
	}
	else{
		d=d+1;
		c=c+a;
	}
	}while(true);
	
	return 0;
	
}
