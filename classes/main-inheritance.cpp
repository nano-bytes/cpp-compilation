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
    // Constructor & Destructor
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

class Horse: public Animal {

private:
    float weight;

public:
    // Constructor & Destructor
    Horse(int age, float weight): Animal(age) {
        this->weight = weight;
        cout << "Constructor called for Horse object" << endl;
    }

    ~Horse() {
        cout << "Destructor called for Horse object" << endl;
    }

    // Functions and Other Stuff
    void printHorseInfo() {
        cout << "The horse has: " << this->age << " years old and weights: "
        << this->weight << "kilograms" << endl;
    }
};

int main() {
    
    char dogName[10] = "Max";
    char ownersName[10] = "Jon";
    int dogAge = 1;

    Dog *dog = new Dog(dogAge, dogName, ownersName);
    dog->printDogInfo();

    delete dog;

    int horseAge = 4;
    float horseWeight = 312.953;

    Horse *horse = new Horse(horseAge, horseWeight);
    horse->printHorseInfo();

    delete horse;

    return 0;
}
