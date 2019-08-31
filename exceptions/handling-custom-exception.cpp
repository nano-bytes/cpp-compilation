#include <iostream>
#include <exception>
#include <string>

using namespace std;

class MyCustomException: public exception {
public:
    string message() {
        return "Custom exception...";
    }
};

int main(int argc, char *argv[]) {

    try {
        throw MyCustomException();
    } catch(MyCustomException e) {
        cerr << "Custom exception thrown with message: " << e.message() << endl;
    }

    return 0;
}
