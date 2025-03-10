#include <iostream>
#include <string>

using namespace std;

class Client {
private:
    string name;
    int age;
    string membershipType;
public:
    Client() : Client("Unknown", 18, "Basic") {}
    Client(string n, int a, string mType) : name(n), age(a), membershipType(mType) {}
    ~Client() { cout << "Client " << name << " removed\n"; }

    void showInfo() {
        cout << "Client: " << name << ", Age: " << age << ", Membership: " << membershipType << endl;
    }
};