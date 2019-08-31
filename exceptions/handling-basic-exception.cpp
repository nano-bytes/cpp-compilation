#include <iostream>

using namespace std;


int division(int a, int b) {
    if(b == 0) {
        throw "Division by zero not allowed";
    }
    return a/b;
}

int main(int argc, char *argv[]) {
    
    try {
        cout << "Division result is: " << division(9,3) << endl;
        cout << "Division result is: " << division(5,0) << endl;
    } catch(const char *message) {
        cerr << message << endl;
    }

    return 0;
}
