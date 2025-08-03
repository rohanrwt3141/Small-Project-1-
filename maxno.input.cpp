#include <iostream>
using namespace std;
int main(){
	int a,b,c=0;
	do{
		cout<<"enter the number :";
		cin>>a;
		cout<<"enter the number -1 for exit and any number for continue :";
		cin>>b;
		if (b==-1){
			cout<<c<<" maximum ";
			break;
		          }
		else{
			if(a>c){
				c=a;
			       }
			}
		
		
	}while(true);
	return 0;
	
}
