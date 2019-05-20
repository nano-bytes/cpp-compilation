#include <iostream>
#include "header.hpp" // Include Header with the declaration of "Person" struct

using namespace std;

int main() {
    
    Person person;
    person = Person{"Jon", "Doe", 50};
    
    showPersonData(person);
   
    return 0;
}

void showPersonData(Person person) { 
    cout << "Name is: " << person.name << endl;
    cout << "Last Name is: " << person.lastName << endl;
    cout << "Age is: " << person.age << endl;
}
