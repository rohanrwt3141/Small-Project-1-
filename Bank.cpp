#include <iostream>
using namespace std;
class bank{
	private :
		string name;
		int acc;
		int PIN;
		int accbala;
		int bala;
	public :
	bank(){
		name="Unknown";
		acc=0;
		PIN=0;
		accbala=0;
	}	
	bank(string na,int ac,int pin,int ab){
		name=na;
		acc=ac;
		PIN=pin;
		accbala=ab;
	}
		void setbala(int bala){
			accbala+=bala;
		}
		void setwbala(int bala){
			while(true){
			
			if(accbala>=bala){
			
			accbala-=bala;
			}
			else{
				cout<<"You don't have enough money "<<endl;
			}
			int exit;
			cout<<"Enter 1 to exit and any no. to continue :";
			cin>>exit;
			if(exit==1){
				break;
				}
			}
		}
	
		string getname(){
			return name;
		}
		int getacc(){
			return acc;
		}
		int getbala(){
			return accbala;
		}
};
int main(){

	string na;
	int ac;
	int pin;
	int opti;
	int epin;
	int ab;
	int dep;
	int withd;
	cout<<"Enter The name ";
	cin>>na;
	cout<<"Enter The account no. ";
	cin>>ac;
	cout<<"Enter The PIN ";
	cin>>pin;
	cout<<"Enter The Balance ";
	cin>>ab;
//	bank b1;
	bank b2(na,ac,pin,ab);
	do{
	
	cout<<"Enter 1 --> To check the account detail \n 2 -->Deposit Money \n 3 --> Withdrawal Money";
	cin>>opti;
	switch (opti){
		case 1:
			cout<<"Enter Your PIN :";
			cin>>epin;
			while(true){
			
			if(epin==pin){
			cout<<"Your Name: "<<b2.getname()<<endl<<"Your account no. :"<<b2.getacc()<<endl<<"Your Total Balance: "<<b2.getbala()<<endl;
			break;
			}
			else{
				cout<<"Invalid PIN"<<endl;
			int exit;
			cout<<"Enter 1 to exit and any no. to continue :";
			cin>>exit;
			if(exit==1){
				break;
				}
			}
			
			}
			break;
		case 2:
			while (true){
			
			cout<<"Enter Your PIN :";
			cin>>epin;
			if(epin==pin){
				cout<<"Enter the amount:";
				cin>>dep;
				b2.setbala(dep);
			break;
			}
			else{
				cout<<"Invalid PIN"<<endl;
			int exit;
			cout<<"Enter 1 to exit and any no. to continue :";
			cin>>exit;
			if(exit==1){
				break;
				}
			}
			
		}
		break;
		case 3:
			while(true){
			cout<<"Enter Your PIN :";
			cin>>epin;
			if(epin==pin){			
				cout<<"Enter the amount:";
				cin>>withd;
				b2.setwbala(withd);
				break;
			}
			else{
				cout<<"Invalid PIN"<<endl;
			int exit;
			cout<<"Enter 1 to exit and any no. to continue:";
			cin>>exit;
			if(exit==1){
				break;
				}
			}
			
		}
		break;
		default:
			cout<<"Invalid Input";
			break;
}
int exit;
cout<<"Enter 1 to exit and any no. to continue :";
cin>>exit;
if(exit==1){
	break;
}

}while(true);

	return 0;
}
