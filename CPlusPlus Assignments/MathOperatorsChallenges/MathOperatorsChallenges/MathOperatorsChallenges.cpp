#include <iostream>

using namespace std;

int main()
{
    //OPERATORS CHALLENGE
    cout << "OPERATORS CHALLENGE\n";

    int num1 = 5;
    int num2 = 10;
    int num3 = 2;

    cout << num1 + num2;
    cout << "\n";
    cout << num2 - num1;
    cout << "\n";
    cout << num1 * num1;
    cout << "\n";
    cout << num2 / num3;
    cout << "\n";
    cout << ++num1;
    cout << "\n";

    cout << "\n";

    //COMPARISON OPERATORS CHALLENGE
    cout << "COMPARISON OPERATORS CHALLENGE\n";

    bool b1 = num1 > num2;
    bool b2 = num1 == num1;
    bool b3 = num1 != num3;
    bool b4 = num1 <= num2;
    cout << b1;
    cout << b2;
    cout << b3;
    cout << b4;
    cout << "\n";

    cout << "\n";

    //ASSIGNMENT OPERATORS CHALLENGE
    cout << "ASSIGNMENT OPERATORS CHALLENGE\n";

    int num4 = 12;
    num1 += 2;
    num2 &= num2;
    num4 <<= num3;

    cout << num1;
    cout << "\n";
    cout << num2;
    cout << "\n";
    cout << num3;
    cout << "\n";
    cout << num4;
    cout << "\n";

    cout << "\n";

    //LOGICAL OPERATOR CHALLENGE
    cout << "LOGICAL OPERATOR CHALLENGE\n";

    if (num1 < num2 && num1 > num4) { cout << "Smaller\n"; };
    if (num1 > num2 || num2 > num4) { cout << "Smaller\n"; };
    if (!b1) { cout << "False\n"; };


}
