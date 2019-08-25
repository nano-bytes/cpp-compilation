#include <iostream>

using namespace std;

template<typename T>
struct Type {
    T value;
};

int main() {

    Type<int> typeInt;
    Type<float> typeFloat;
    Type<char> typeChar;

    typeInt.value = 1;
    typeFloat.value = 3.45f;
    typeChar.value = 'A';

    cout << "'Int' value is: " << typeInt.value << endl;
    cout << "'Float' value is: " << typeFloat.value << endl;
    cout << "'Char' value is: " << typeChar.value << endl;

    return 0;
}
