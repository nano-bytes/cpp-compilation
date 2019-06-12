#include <iostream>

using namespace std;

/**
 * This class can set name, last name and age of a person
 * and print its info
 */
class Person { // Just Declaration of a class
public: 
    // Constructor
    Person(char *name, char *lastName) 
    :name(name), lastName(lastName) {
        cout << "Constructor is called!!" << endl;
    }
    
    // Destructor
    ~Person() {
        cout << "Destructor is called!!" << endl;
    }
    
private: // Private methods and/or variables
    char *name, *lastName;
    int age;
    
public: // Public methods and/or variables
    void printPersonInfo();
    
    void setAge(int personAge) {
        age = personAge;
    }
};

int main() {
    
    char personName[50] = "John";
    char personLastName[50] = "Doe";
    
    // New Instance of Person with a constructor in it
    Person *person = new Person(personName, personLastName);
   
    person -> setAge(31);
    
    cout << "Print Person info before use destructor" << endl;
    cout << endl;
    person -> printPersonInfo();
    delete person; // Call destructor to free memory
   
    cout << endl;
    cout << "Try to print Person info after use destructor" << endl;
    person -> printPersonInfo();
    
    return 0;
}

/**
 * This function was declared on Person object but
 * not defined in it, in order to defined out of Person
 * scope we need to use "::"
 */
void Person::printPersonInfo() {
    cout << "Name is: " << name << endl;
    cout << "Last Name is: " << lastName << endl;
    cout << "Age is: " << age << endl;
}

