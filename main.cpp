#include <iostream>

#include "Manager.h"

using namespace std;

int main() {
    auto manager = new Manager("Starinin", "Andrey", "18.02.1986", "IT");
    cout << manager->getLastName() << " " << manager->getDepartment() << endl;


    return 0;
}
