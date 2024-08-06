#include <iostream>
#include <string>

using namespace std;

class Mobile {
private:
    string brand;
    double price;
    string color;
    double width;
    double height;

public:
    // Parameterized constructor to set user-provided values
    Mobile(string b, double p, string c, double w, double h)
        : brand(b), price(p), color(c), width(w), height(h) {}

    // Function to display details of all attributes
    void displayDetails()  {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Color: " << color << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    // Variables to hold user input
    string brand;
    double price;
    string color;
    double width;
    double height;

    // Prompt the user for input
    cout << "Enter brand: ";
    cin >> brand;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter color: ";
    cin >> color;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    // Create a Mobile object with user-provided values
    Mobile myMobile(brand, price, color, width, height);

    // Display the details of the Mobile object
    myMobile.displayDetails();

    return 0;
}

