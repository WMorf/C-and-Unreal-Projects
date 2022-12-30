#include <iostream>

using namespace std;

void testFunction() //MAIN() FUNCTION CHALLENGE, Declare your own function.
{
	cout << "Test\n";
}

void testFunction(string message) //Overloaded Method
{
	cout << message << "\n";
}

int testFunction2(int a, int b) //FUNCTION CHALLENGE
{
	int result = a + b;
	return result;
}

void testFunction3(string &a, string b) //Passes in reference and changes it to a new value
{
	a = b;
	cout << a << "\n";
}

class NewClass //CLASS CHALLENGE
{
	public:
		int id;
		string myName;

	NewClass(int num, string name)
	{
		id = num;
		myName = name;
		cout << myName << " Was Created\n";
	}

	void Identify()
	{
		cout << id << " "  << myName << "\n";
	}
};

class EvenNewerClass //Constructer CHallenge
{
	string myName;
};

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
	testFunction3(base, "New Value");
	testFunction("Message");

	cout << "\n";

	//CLASS CHALLENGE 
	cout << "//CLASS CHALLENGE \n";

	NewClass obj1(1, "Bob");
	NewClass obj2(2, "Larry");
	NewClass obj3(3, "Steve");

	cout << "\n";

	//CLASS METHODS CHALLENGE
	cout << "//CLASS METHODS CHALLENGE\n";

	obj1.Identify();
	obj2.Identify();
	obj3.Identify();

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

