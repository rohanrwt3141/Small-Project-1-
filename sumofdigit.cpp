#include <iostream>
using namespace std;
int main(){
	int a,b=1,s=0;
	cout<<"Enter The Number:";
	cin>>a;
	while(b!=0){
		s=s+(a%10);
		b=a/10;
		a=a/10;
	}
	cout<<"The sum of no. is "<<s;
	return 0;
}
