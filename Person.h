#ifndef UNTITLED2_PERSON_H
#define UNTITLED2_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string _last_name;
    string _first_name;
    string _date;

public:
    Person(const string &lastName, const string &firstName, const string &date) : _last_name(lastName),
                                                                                  _first_name(firstName), _date(date) {}


    virtual ~Person() = default;

    const string &getLastName() const {
        return _last_name;
    }

    const string &getFirstName() const {
        return _first_name;
    }

    const string &getDate() const {
        return _date;
    }
};


#endif //UNTITLED2_PERSON_H
