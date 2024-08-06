#include<iostream>
using namespace std;
class calc{
	int a;
	public:
		calc(){
			a=0;
		}
		calc(int x){
			a=x;	
		}
		void vol(){
			cout<<"Volume of a Cube is "<<a*a*a;
		}
		
};
int main(){
	int a,b;
	cout<<"enter one numbers ";
	cin>>a;
	calc obj(a);
	obj.vol();
	return 0;
}
