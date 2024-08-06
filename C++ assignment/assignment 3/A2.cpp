#include<iostream>
using namespace std;
class calc{
	int a,b;
	public:
		calc(){
			a=b=0;
		}
		calc(int x,int y){
			a=x;
			b=y;
		}
		void add(){
			cout<<"Addition of two number is "<<a+b;
			cout<<endl;
		}
		void sub(){
			cout<<"Subtraction of two number is "<<a-b;
			cout<<endl;
		}
		void mul(){
			cout<<"Multiplication of two number is "<<a*b;
			cout<<endl;
		}
		void div(){
			cout<<"Division of two number is "<<(float)a/b;
			cout<<endl;
		}
};
int main(){
	int a,b;
	cout<<"enter two numbers ";
	cin>>a>>b;
	calc obj(a,b);
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	return 0;
}
