#include <iostream>
#include <string>

using namespace std;

class MobileWithDefaults {
private:
    string brand;
    double price;
    string color;
    double width;
    double height;

public:
    MobileWithDefaults(string b = "Unknown", double p = 0.0, string c = "Black", double w = 0.0, double h = 0.0)
        : brand(b), price(p), color(c), width(w), height(h) {}

    void displayDetails() const {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Color: " << color << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};

class Mobile {
public:
    string brand;
    double price;
    string color;

    Mobile(string b = "", double p = 0.0, string c = "") : brand(b), price(p), color(c) {}

    void displayDetails() const {
        cout << "Brand: " << brand << ", Price: " << price << ", Color: " << color << endl;
    }
};

int main() {
    MobileWithDefaults defaultMobile;
    cout << "Default Mobile Details:" << endl;
    defaultMobile.displayDetails();
    cout << endl;

    const int numMobiles = 5;
    Mobile mobiles[numMobiles];

    string brand;
    double price;
    string color;

    for (int i = 0; i < numMobiles; i++) {
        cout << "Enter details for mobile " << i + 1 << ":" << endl;
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter color: ";
        cin >> color;

        mobiles[i] = Mobile(brand, price, color);
    }

    int count = 0;
    for (int i = 0; i < numMobiles; i++) {
        if (mobiles[i].price > 5000) {
            count++;
        }
    }
    cout << "Total number of mobiles with price greater than 5000: " << count << endl;

    cout << "Mobiles with price range 1000 to 10000:" << endl;
    for (int i = 0; i < numMobiles; i++) {
        if (mobiles[i].price >= 1000 && mobiles[i].price <= 10000) {
            mobiles[i].displayDetails();
        }
    }

    return 0;
}

