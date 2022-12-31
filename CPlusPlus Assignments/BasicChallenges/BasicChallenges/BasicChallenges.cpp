#include <iostream>
using namespace std;

int main()
{
    //HELLO WORLD CHALLENGE
    cout << "//HELLO WORLD CHALLENGE\n";


    cout << "Hello World!\n";
    cout << "\n";

    //C++ OUTPUT CHALLENGE
    cout << "//C++ OUTPUT CHALLENGE\n";

    cout << "This is output using cout << \n";
    cout << "\n";

    //C++ NEW LINES CHALLENGE
    cout << "//C++ NEW LINES CHALLENGE\n";

    cout << "Make a new line by typing \\n like \nthis\n";
    cout << "\n";


    //VARIABLES CHALLENGE
    cout << "//VARIABLES CHALLENGE\n";

    char key = 'b'; //Single quotes needed
    int num1 = 5;
    int num2 = 4;
    double dub1 = 5.4;
    bool smart = true;
    string name = "Bob";
    const int num3 = 10;

    cout << key;
    cout << "\n";
    cout << num1;
    cout << "\n";
    cout << num2;
    cout << "\n";
    cout << dub1;
    cout << "\n";
    cout << smart;
    cout << "\n";
    cout << name;
    cout << "\n";
    cout << num3;
    cout << "\n";

    cout << "\n";

    //USER INPUT CHALLENGE
    cout << "//USER INPUT CHALLENGE\n";

    string input1 = "";
    cout << "Input Text Here \n";
    cin >> input1; // >> for input
    cout << input1;
    cout << "\n";

    cout << "\n";

    //NUMBERS CHALLENGE
    cout << "//NUMBERS CHALLENGE\n";

    float num4 = 7;
    cout << num4;
    cout << "\n";

    cout << "\n";

    //STRING CHALLENGE
    cout << "//STRING CHALLENGE\n";

    string sent1 = "This is the start.";
    string sent2 = "This is the end.";
    cout << sent1 + " " + sent2;
    cout << "\n";
    cout << "\n";

    //STRING FUNCTIONS CHALLENGE:
    cout << "//STRING FUNCTIONS CHALLENGE\n";

    string sent3 = "This will be counted";
    cout << sent3;
    cout << "\n";
    int sent3Count = sent3.length();
    cout << sent3Count;
    cout << "\n";
    cout << sent3[2];
    cout << "\n";
    sent3[2] = 'u'; //single quotes fir char
    cout << sent3;
    cout << "\n";

}


