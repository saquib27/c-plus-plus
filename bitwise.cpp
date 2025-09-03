#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int bitwise_and = a & b;
    int bitwise_or = a | b;
    int bitwise_xor = a ^ b;
    int bitwise_not = ~b;

    int left_shift = a << b;
    int right_shift = a >> b;

    cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "NOT: " << bitwise_not << endl;
    cout << "Left Shift: " << left_shift << endl;
    cout << "Right Shift: " << right_shift << endl;

    return 0;
}
