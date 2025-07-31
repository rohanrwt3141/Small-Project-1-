#include <iostream>
using namespace std;
int  main(){
int a;
cout<<"Enter The Number of Days :";
cin>>a;
if(a<365){
cout<<(a/7)<<" weeks "<<(a%7);
}

else{
	if((a%365)<7){
		cout<<(a/365)<<" years "<<(a%365)<<" days ";
}
else{
		cout<<(a/365)<<" years "<<((a%365)/7)<<" weeks "<<(((a%365)/7)%7)<<" days ";
}

}
return 0;
}

