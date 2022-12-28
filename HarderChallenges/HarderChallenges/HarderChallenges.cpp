#include <iostream>
#include <string>
using namespace std;

int main()
{
    //MULTI LINE CODE COMMENTS CHALLENGE
    cout << "//MULTI LINE CODE COMMENTS CHALLENGE\n";
    
        /*This is commented
        over multiple lines*/
    cout << "Nothing to see here\n";

    cout << "\n";

    //GETLINE() FUNCTION CHALLENGE
    cout << "//GETLINE() FUNCTION CHALLENGE\n";

    string fullName;
    cout << "Type your full name\n";
    getline(cin, fullName);
    cout << fullName;
    cout << "\n";

    cout << "\n";

    //MATH FUNCTIONS CHALLENGE
    cout << "//MATH FUNCTIONS CHALLENGE\n";

    cout << max(5, 10); //Utilize the max(x,y) function.
    cout << "\n";
    cout << sqrt(64); //Utilize the sqrt function.
    cout << "\n";
    cout << round(2.6); //Utilize the round function.
    cout << "\n";
    cout << pow(2, 2); //Utilize the pow(x, y) function.
    cout << "\n";

    cout << "\n";

    //CONDITIONAL STATEMENTS CHALLENGE
    cout << "//CONDITIONAL STATEMENTS CHALLENGE\n";

    bool test = true;

        //Write and execute an if statement and display the result in the console.
    if (test == true)
    {
        cout << "This will print\n";
    }

        //Write and execute an else statement and display the result in the console.
    if (!test)
    {
        cout << "Won't print";
    }
    else
    {
        cout << "This will print\n";
    }

        //Write and execute an else if statement and display the result in the console.
    if (!test)
    {
        cout << "Won't print";
    }
    else if (test == true)
    {
        cout << "This will print\n";
    }

        //Write and execute a switch statement and display the result in the console.
    switch (test)
    {
    case false:
        cout << "Won't print";
        break;

    case true:
        cout << "This will print\n";
        break;
    default:
        cout << "Won't print";
    }

        //Utilize a ternary operator. 
    string result = (test == true) ? "True\n" : "False\n";
    cout << result;

    cout << "\n";

    //WHILE LOOP CHALLENGE
    cout << "//WHILE LOOP CHALLENGE\n";

        //Write and execute a do/while loop, and display the result in the console.
    int count = 0;
    while (count <= 10)
    {
        cout << count;
        cout << "\n";
        ++count;
    }

    cout << "\n";

    //DO/WHILE LOOP CHALLENGE
    cout << "//DO/WHILE LOOP CHALLENGE\n";

        //Write and execute a do/while loop, and display the result in the console.
    do {
        cout << "This will print\n";
        ++count;
    } while (count < 10);

    cout << "\n";

    //FOR LOOP CHALLENGE
    cout << "//FOR LOOP CHALLENGE\n";

    for (int i = 11; i >= 0; --i)
    {
        cout << i;
        cout << "\n";
    }

    cout << "\n";

    //BREAK AND CONTINUE CHALLENGE
    cout << "//BREAK AND CONTINUE CHALLENGE\n";

    count = 0;

    while (count <= 10)
    {
        cout << count;
        cout << "\n";

        if (count == 5)
        {
            cout << "Shwoopsie\n";
            count += 2;
            continue;
            
        }
        if (count == 9)
        {
            break;
        }
        ++count;

    }

    cout << "\n";

    //ARRAY CHALLENGE
    cout << "//ARRAY CHALLENGE\n";

    int ar[5] = { 1,2,3,4,5 }; //Declare an array and display one of its elements in the console.
    cout << ar[1] << "\n";

    cout << "\n";

    //ARRAY LOOP CHALLENGE
    cout << "//ARRAY LOOP CHALLENGE\n";

    for ( int i : ar) //Loop through the elements of an array.
    {
        cout << i << "\n";

    }

    cout << "\n";

    //REFERENCE VARIABLE CHALLENGE
    cout << "//REFERENCE VARIABLE CHALLENGE\n";

    int& oldCount = count;
    cout << oldCount;

    cout << "\n";

}
