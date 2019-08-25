#include <iostream>

using namespace std;

void variadicPrint() {
    cout << endl;
}

template<typename T, typename...Params>
void variadicPrint(T &&eachArgument, Params&&... args) {
    cout << eachArgument << " ";
    variadicPrint(forward<Params>(args)...);
}

int main() {

    variadicPrint(1, 2.5, "hola", 4, 3.141592);
    return 0;
}

