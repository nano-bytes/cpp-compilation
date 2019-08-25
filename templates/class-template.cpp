#include <iostream>

using namespace std;

template<typename T>
class Stack {
    T mBuffer[512];
    int mTop{ -1 };
public:
    void push(const T &elem) {
        mBuffer[++mTop] = elem;
    }

    void pop();

    const T& getTop() const {
        return mBuffer[mTop];
    }

    bool isEmpty() {
        return mTop == -1;
    }
};

template<typename T>
void Stack<T>::pop() {
    --mTop;
}

int main() {
    
    Stack<float> s;
    s.push(1);
    s.push(9);
    s.push(0);
    s.push(5);
    s.push(4.12);

    while (!s.isEmpty()) {
        cout << s.getTop() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}

