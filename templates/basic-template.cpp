#include <iostream>

using namespace std;

template<typename T>
T Max (T x, T y) {
	return x > y ? x : y;
}

int main() {
	cout << "Bigger number is: " << Max(5, 3) << endl;
	cout << "Bigger number is: " << Max(5.4f, 6.13f) << endl;
}

