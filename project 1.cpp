#include <iostream>
using namespace std;
void greet (){
	cout<<"---------------------Hello User------------------------- ";
}
int calculator(){
	cout<<"------------------This is the calulator---------------------- "<<endl;
	int a,b,c;
	cout<<"Enter the number :";
	cin>>a;
	cout<<"Enter the number :";
	cin>>b;
	cout<<"Enter 1 -->addition 2 -->subtraction 3 -->multiplication 4 -->division "<<endl;
	cin>>c;
	if(c==1){
		cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
	}
	else if(c==2){
		cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
	}	
	else if(c==3){
		cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
	}	
	else if(c==4){
		cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
	}	
	else{
		cout<<"invalid input"<<endl;
	}
	
}
int maxinput(void){
	cout<<"------------------Maximum Input---------------------- "<<endl;
	int a,b,c=0 ;
	while(true){
		cout<<"enter the number :";
		cin>>a;
		if(a>c){
			c=a;
			   }
		else{
			continue;
		    }
		cout<<"enter the number -1 for exit and any number for continue :";
		cin>>b;
		if(b==-1){
			cout<<c<<" maximum ";
			break;
				 }
		
	}
}
int reverse(void){
	cout<<"------------------Reverse The Number---------------------- "<<endl;
	int a,s=0;
	cout<<"Enter The Number :"<<endl;
	cin>>a;
	while(a!=0 ){
		s=(s*10)+(a%10);
		a=a/10;}
	cout<<"Reserving Number"<<s;
}
int main(){
	int z;
	greet();
	cout<<endl;
	while(true){
	int g;	
	cout<<"Enter 1-->Reversing no. 2 --> calculator 3 -->Maximun no. from input :"<<endl;
	cin>>z;
	if(z==1){
		reverse();
		cout<<endl;
	}
	else if (z==2){
		calculator();
		cout<<endl;
		}	
	else{
		maxinput();
		cout<<endl;
	}
	cout<<"Enter 1 to exit"<<endl;
	cin>>g;
	if(g==1){
		break;
	}
		}
	return 0;
}
