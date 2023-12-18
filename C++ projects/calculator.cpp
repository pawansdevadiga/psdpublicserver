#include <iostream>
using namespace std;

int main()
{
    double a, b, result;
    char operation;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the operation(+,-,*,/): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;

    default:
        cout << "Invalid operation" << endl;
        break;
    }
    cout << "The Answer is " << result;
    return 0;
}