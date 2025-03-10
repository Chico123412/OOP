#include <iostream>
#include <string>

using namespace std;


class Trainer {
private:
    string name;
    int experience;
    string specialization;
public:
    Trainer() : name("Unknown"), experience(0), specialization("General") {}
    Trainer(string n, int exp, string spec) : Trainer() {name=n; experience=exp; specialization=spec; }
    ~Trainer() { cout << "Trainer " << name << " removed\n"; }


    void showInfo() {
        cout << "Trainer: " << name << ", Experience: " << experience << " years, Specialization: " << specialization << endl;
    }
};



