#include<iostream>
using namespace std;
class box{
	int l,b,h;
	public:
		box(){
			l=b=h=0;
		}
		box(int x,int y,int z){
			l=x;
			b=y;
			h=z;	
		}
		void area(){
			cout<<"Area  of a box is "<<2*(l*b+b*h+h*l);
		}
		
};
int main(){
	int a,b,c;
	cout<<"enter three numbers ";
	cin>>a>>b>>c;
	box obj(a,b,c);
	obj.area();
	return 0;
}
