#include <iostream>
#include <string.h>

using namespace std;

template<typename T>
T Max (T x, T y) {
	return x > y ? x : y;
}
// Explicit instantiation
template float Max(float x , float y);

// Explicit specialization
template<> const char *Max<const char *>(const char *x, const char *y) {
    return strcmp(x, y) > 0 ? x : y;
}

int main() {
	cout << "Bigger number is: " << Max(5, 3) << endl;
	cout << "Bigger number is: " << Max(5.4f, 6.13f) << endl;
	
	const char *a{"A"};
    const char *b{"B"};
    auto s = Max(a, b);
    
    cout << "'Bigger' char is: " << s << endl;
}

