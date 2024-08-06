#include<iostream>
using namespace std;
class Area{
	int l,b;
	public:
	Area(){
		l=0;
		b=0;
	}
	Area(int x,int y){
		l=x;
		b=y;
	}
	void area(){
		cout<<"Area of Rectangle ";
		cout<<l*b;
	}
	
};
int main(){
	Area obj(5,6);
	obj.area();
	return 0;
}
