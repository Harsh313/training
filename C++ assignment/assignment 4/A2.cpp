#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    void set_value(string n, int a) {
        name = n;
        age = a;
    }

   
};

class Zebra : public Animal {
public:
    void display_info()  {
        cout << "Zebra name: " << name << ", Age: " << age << endl;
        cout << "Place of origin: Earth" << endl;
    }
};

class Dolphin : public Animal {
public:
    void display_info()  {
        cout << "Dolphin name: " << name << ", Age: " << age << endl;
        cout << "Place of origin: Water" << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Zeny", 4);
    dolphin.set_value("Dolly", 6);

    zebra.display_info();
    dolphin.display_info();

    return 0;
}

