#include <iostream>
#include <string>

using namespace std;

class Programming {
public:
    void display(string str="programming languages"){
    	cout<<"I Love "<<str<<endl;
	}
};

int main() {
    Programming obj1; 
	obj1.display()  ;       // This will print "I love programming languages"
    Programming obj2;   // This will print "I love cpp"
    obj2.display("cpp");
    return 0;
}

