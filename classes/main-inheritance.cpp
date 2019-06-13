#include <iostream>

using namespace std;

class Animal {

protected:
    int age;
    
public:
    // Constructor & Destructor
    Animal(int age): age(age) {
        cout << "Constructor called for Animal object" << endl;
    }
    
    ~Animal() {
        cout << "Destructor called for Animal Object" << endl;
    }
};

class Dog: public Animal {
    
private:
    char *name, *ownersName;
    
public:
    Dog(int age, char *name, char *ownersName): Animal(age) {
        this->name = name;
        this->ownersName = ownersName;
        cout << "Constructor called for Dog object" << endl;
    }
    
    ~Dog() {
        cout << "Destructor called for Dog object" << endl;
    }
    
    // Functions and Other Stuff
    void printDogInfo() {
        cout << "Name is: " << this->name << " has " << this->age 
        << " years old and its owner is: " << this->ownersName << endl;
    }
    
};

int main() {
    
    char dogName[10] = "Max";
    char ownersName[10] = "Jon";
    int dogAge = 1;
    
    Dog *dog = new Dog(dogAge, dogName, ownersName);
    
    dog->printDogInfo();
    
    delete dog;
    
    return 0;
}
