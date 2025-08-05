#include <iostream>
using namespace std;
int main(){
	//Reserving Number
	int a,s=0;
	cout<<"Enter The Number :";
	cin>>a;
	while(a!=0 ){
		s=s*10+(a%10);
		a=a/10;}
	cout<<"Reserving Number"<<s;
		return 0;
}
