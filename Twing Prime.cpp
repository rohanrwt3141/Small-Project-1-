#include <iostream>
using namespace std;
int main(){
	int a,b,c=0,d=0;
	cout<<"Enter The Number:";
	cin>>a;
	cout<<"Enter The Number:";
	cin>>b;
		for(int i=2;i<a;i++){
			if(a%i==0){
				cout<<a<<" is not a prime no.";
				c+=1;
				break;
			}
		}
		if(c==0){
			for (int j=a+1;j<(b+1);j++){
				int flag=0;
				for(int k=2;k<j;k++){
				
					if(j%k==0){
						
						flag=1;
					}
					
				if(flag==0){
					if(j==b){
						cout<<"Its a twing Prime";
						break;
					}
					else{
						d=1;
						break;
						
					}
				}
			}
		if(d==1){
					cout<<"It is not a twing Prime";
					break;
				}	
		}
		}
return 0;
}

