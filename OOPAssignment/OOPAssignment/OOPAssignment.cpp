#include <iostream>

using namespace std;

class Dog
{
    public:
        string Breed;
        string Color;
        int Height = 0;
        int Weight = 0;

        void Shake()
        {
            cout << "The " << Breed << " shakes paws\n";
        }

        void Sit()
        {
            cout << "The " << Breed << " sits down\n";
        }

        void LayDown()
        {
            cout << "The " << Breed << " lays down\n";
        }

};

int main()
{
    Dog dog1;
    dog1.Breed = "Hound", dog1.Color = "Brown", dog1.Height = 2, dog1.Weight = 60;
}


