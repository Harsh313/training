#include <iostream>

using namespace std;

class Base {
public:
    int i;

    void printNum() const {
        cout << "Value of i: " << i << endl;
    }
};

class Derived : public Base {
public:
    int j;

    void printNum() const {
        cout << "Value of j: " << j << endl;
    }
};

int main() {
    Derived obj;
    
    obj.i = 10;
    obj.j = 20;
    
    obj.printNum(); // Calls Derived::printNum to print j
    
    obj.Base::printNum(); // Calls Base::printNum to print i

    return 0;
}

