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
        cout << "Division result is: " << division(7,0) << endl;
    } catch(int e) {
        cerr << "Int exception caught with message: " << e << endl;
    } catch(...) {
        cerr << "Default exception caught" << endl;
    }

    return 0;
}
