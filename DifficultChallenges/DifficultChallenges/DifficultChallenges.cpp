#include <iostream>

using namespace std;

void testFunction() //MAIN() FUNCTION CHALLENGE, Declare your own function.
{
	cout << "Test\n";
}

int testFunction2(int a, int b) //FUNCTION CHALLENGE
{
	int result = a + b;
	return result;
}

int testFunction3(int& a, int& b)
{

}

void main()
{
	//& OPERATOR CHALLENGE
	cout << "//& OPERATOR CHALLENGE\n";

	string base = "Base Value";
	cout << &base <<"\n"; //Utilize the & operator to get the memory address of a variable.

	cout << "\n";

	//POINTER CHALLENGE
	cout << "//POINTER CHALLENGE\n";

	string* pointer = &base; //Utilize the * operator to create a pointer variable.
	cout << pointer << "\n";

	cout << "\n";

	//DEREFERENCE OPERATOR CHALLENGE
	cout << "//DEREFERENCE OPERATOR CHALLENGE\n";

	cout << *pointer << "\n"; //Utilize the dereference operator.

	cout << "\n";

	//MAIN() FUNCTION CHALLENGE
	cout << "//MAIN() FUNCTION CHALLENGE\n";

	testFunction();

	cout << "\n";

	//FUNCTION CHALLENGE
	cout << "//FUNCTION CHALLENGE\n";
	
	testFunction();
	cout << testFunction2(5,9) << "\n";

	cout << "\n";

	//CLASS CHALLENGE 
	cout << "//CLASS CHALLENGE \n";



	cout << "\n";

	//CLASS METHODS CHALLENGE
	cout << "//CLASS METHODS CHALLENGE\n";



	cout << "\n";

	//CONSTRUCTOR METHOD CHALLENGE
	cout << "//CONSTRUCTOR METHOD CHALLENGE\n";



	cout << "\n";

	//PRIVATE KEYWORD CHALLENGE
	cout << "//PRIVATE KEYWORD CHALLENGE\n";



	cout << "\n";

	//PROTECTED  KEYWORD CHALLENGE
	cout << "//PROTECTED  KEYWORD CHALLENGE\n";



	cout << "\n";

	//INHERITANCE CHALLENGE
	cout << "//INHERITANCE CHALLENGE\n";



	cout << "\n";

	//POLYMORPHISM CHALLENGE
	cout << "//POLYMORPHISM CHALLENGE\n";



	cout << "\n";

	//EXCEPTION CHALLENGE
	cout << "//EXCEPTION CHALLENGE\n";



	cout << "\n";

}

