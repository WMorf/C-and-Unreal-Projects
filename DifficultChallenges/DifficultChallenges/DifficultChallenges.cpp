#include <iostream>

using namespace std;

//---------------------------------------------------------
//Function, Class, and Cnstructor CHallenges
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
		string message = "Now I am the one who is Breaking Bad";

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

		void SayMessage()
		{
			cout << message;
		}
};

//----------------------------------------------------------
class EvenNewerClass //Constructer Challenge
{
	private:
		int id = 0;

	protected:
		string color = "green";

	public:
		string myName;

		EvenNewerClass(string name);

		void SayName();

		void SayID()
		{
			cout << id << "\n";
		}

		void SayColor()
		{
			cout << color << "\n";
		}


};

void EvenNewerClass::SayName() //Define a function that belongs to a class outside the class definition.
{
	cout << myName << "\n";
}

EvenNewerClass::EvenNewerClass(string name) //Define a constructor outside a class.
{
	myName = name;
}
//---------------------------------------------------------

//Inheritance Challenges
class OtherClass
{
	protected:
		string otherMessage = "No I'm Dirty Dan\n";



};

class ThisClass
{
	public:
		string inherit = "I'm Inherited\n";

		void SayMessage(string message)
		{
			cout << message << "\n";
		}
};

class InheritedClass : public ThisClass //Utilize the : symbol to inherit from a class.
{
	public:
		string a = "I'm inheriting ThisClass\n";
};

class GrandChildClass : public InheritedClass //Utilize multilevel inheritance.
{
	public:
		string b = "I'm inheriting InheritedClass\n";
};

class MutantClass : public ThisClass, public OtherClass // Derive a class from more than one base class (using a comma-separated list).
{
	public:
		string c = "What am I!?\n";

		void SayOtherMessage()
		{
			cout << otherMessage;
		}
};

//PolyMorph Challenges
class Wizard
{
	public:

		void Status()
		{
			cout << "I am a Wizard\n";
		}
};

class Sheep : Wizard
{
	public:

		void Status() //Polymorphism on Status Method
		{
			cout << "Zorp!\n" << "Now I am a sheep! I mean...baaaaa\n";
		}
};

int main()
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

	EvenNewerClass obj4("Tom");
	obj4.SayName();

	cout << "\n";

	//PRIVATE KEYWORD CHALLENGE
	cout << "//PRIVATE KEYWORD CHALLENGE\n";

	obj4.SayID();

	cout << "\n";

	//PROTECTED  KEYWORD CHALLENGE
	cout << "//PROTECTED  KEYWORD CHALLENGE\n";

	obj4.SayColor();

	cout << "\n";

	//INHERITANCE CHALLENGE
	cout << "//INHERITANCE CHALLENGE\n";

	InheritedClass obj5;
	GrandChildClass obj6;
	MutantClass obj7;

	obj5.SayMessage(obj5.inherit); //Inherited String
	obj5.SayMessage(obj5.a); //States which class inherited from
	obj6.SayMessage(obj6.b); //Multilevel Inheritance, states which class derived from
	obj7.SayMessage(obj7.c); //Multi Inheritance
	obj7.SayOtherMessage(); //Access the protected specifier in an inherited class. 
	
	cout << "\n";

	//POLYMORPHISM CHALLENGE
	cout << "//POLYMORPHISM CHALLENGE\n";

	Wizard wiz1;
	wiz1.Status();
	Sheep wiz2;
	wiz2.Status(); //Write code in C++ that utilizes polymorphism.

	cout << "\n";

	//EXCEPTION CHALLENGE
	cout << "//EXCEPTION CHALLENGE\n";

	try
	{
		int input;
		cout << "Type a number between 1 and 10\n";
		cin >> input;

		if (input > 0 && input < 11)
		{
			cout << "Your number is " << input;
		}
		else
		{
			throw (input);
		}
	}
	catch (int num)
	{
		cout << "That is not right.\n" << "You entered " << num << "\n";
	}

	cout << "\n";

}

