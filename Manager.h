#ifndef UNTITLED2_MANAGER_H
#define UNTITLED2_MANAGER_H

#include "Person.h"

class Manager : public Person {
private:
    string _department;

public:
    Manager(const string &lastName, const string &firstName, const string &date, const string &department) : Person(
            lastName, firstName, date), _department(department) {}

    ~Manager() override = default;

    const string &getDepartment() const {
        return _department;
    }

    void setDepartment(const string &department) {
        _department = department;
    }
};


#endif //UNTITLED2_MANAGER_H
