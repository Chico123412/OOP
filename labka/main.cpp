#include <iostream>
#include <string>
#include "clas Trainer.h"
#include "clas membership.h"
#include "clas client.h"

using namespace std;


int main() {
    Trainer trainer1("Sasha Biliy", 5, "Fitness");
    Client client1("Anna Trinch", 25, "Premium");
    Membership membership1(12, 310);

    trainer1.showInfo();
    client1.showInfo();
    membership1.showInfo();

    return 0;
}