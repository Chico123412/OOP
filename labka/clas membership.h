#include <iostream>
#include <string>

using namespace std;

class Membership {
private:
    int duration;
    double price;
public:
    Membership() : Membership(1, 100.0) {}
    Membership(int d, double p) : duration(d), price(p) {}
    ~Membership() { cout << "Membership removed\n"; }

    void showInfo() {
        cout << "Membership: " << duration << " months, Price: $" << price << endl;
    }
};