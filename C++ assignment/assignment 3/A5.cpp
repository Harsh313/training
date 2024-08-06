#include<iostream>
#include<conio.h>
using namespace std;
class bank{
	int acc_no,bal;
	public:
		bank(){
			acc_no=bal=0;
		}
		bank(int x,int y){
			acc_no=x;
			bal=y;	
		}
		void deposit(){
			int x;
			cout<<"\n enter the amount you want to deposit\n";
			cin>>x;
			bal+=x;
		}
		void withdraw(){
			int x;
			cout<<"\n enter the amount you want to withdraw\n";
			cin>>x;
			if(bal-x<0)
			{
				cout<<"\n Not Enough Balance";
				getch();
			}
			else{
				bal-=x;
			}
		}
		void balance(){
			cout<<"\nYour Current Balance is "<<bal;
			getch();
		}
};
int main(){
	int x,y;
	cin>>x>>y;
	bank obj(x,y);
	while(true){
		system("cls");
		int choice;
		cout<<"Enter your choice \n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\n";
		cin>>choice;
		switch(choice){
			case 1:
				obj.deposit();
				break;
			case 2:
				obj.withdraw();
				break;
			case 3:
				obj.balance();
				break;
			case 4:
				exit(0);
				break;
		}
	}
	return 0;
	
}
