#include <iostream>
#include "math-operations.cpp"

using namespace std;

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
