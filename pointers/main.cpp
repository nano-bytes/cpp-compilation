#include <iostream>

using namespace std;

int main() {
    int age = 30;
    int *d;
    int temp = 0;
    
    d = &temp;

    cout << "Value of 'temp' variable is: " << temp << endl;
    cout << "Value of 'd' pointer is: " << d << " in this case is the memory direction of 'temp'" << endl;
    *d = age;
    cout << "Value of 'temp' variable after assinged 'age' via pointer is: " << temp << endl;

    return 0;
}
