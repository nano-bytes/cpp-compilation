#include <iostream>

using namespace std;

int sum(int, int);
int subtract(int, int);
int multiply(int, int);
int division(int, int);

int main(int argc, char *argv[]) {
    int firstNumber, secondNumber, result;
    
    firstNumber = 10;
    secondNumber = 5;
   
    result = sum(firstNumber, secondNumber);
    cout << "Result of sum is: " << result << endl;
    result = subtract(firstNumber, secondNumber);
    cout << "Result of subtract is: " << result << endl;
    result = multiply(firstNumber, secondNumber);
    cout << "Result of multiplication is: " << result << endl;
    result = division(firstNumber, secondNumber);
    cout << "Result of division is: " << result <<endl;
    
}

int sum(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int subtract(int firstNumber, int secondNumber) {
    return firstNumber - secondNumber;
}


int multiply(int firstNumber, int secondNumber) {
    return firstNumber * secondNumber;
}

int division(int firstNumber, int secondNumber) {
    return firstNumber / secondNumber;
}
