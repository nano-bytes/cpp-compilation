#include <iostream>

using namespace std;

/**
 * This class can set name, last name and age of a person
 * and print its info
 */
class Person { // Just Declaration of a class
private: // Private methods and/or variables
    char *name, *lastName;
    int age;
    
public: // Public methods and/or variables
    void printPersonInfo();
    
    void setName(char* personName) {
        name = personName;
        
    }
    
    void setLastName(char* personLastName) {
        lastName = personLastName;
    }
    
    void setAge(int personAge) {
        age = personAge;
    }
};

int main() {
    
    Person person; // New Instance of Person
    
    char personName[50] = "John";
    char personLastName[50] = "Doe";
    
    person.setName(personName);
    person.setLastName(personLastName);
    person.setAge(31);
    person.printPersonInfo();
    
    return 0;
}

/**
 * This function was declared on Person object but
 * not defined in it, in order to defined out of Person
 * ambit we need to use "::"
 */
void Person::printPersonInfo() {
    cout << "Name is: " << Person::name << endl;
    cout << "Last Name is: " << Person::lastName << endl;
    cout << "Age is: " << Person::age << endl;
}
