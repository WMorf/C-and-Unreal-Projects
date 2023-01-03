#include <iostream>

using namespace std;

class Shape
{
    public:
        string Color;

        void getArea();

};

class Rectangle : Shape
{
    public:
        float Height = 0;
        float Width = 0;

        void getArea()
        {
            float area = Height * Width;
            cout << "Area of a Rectangle: " << area << "\n";
        }
};

class Triangle : Shape
{
    public:
        float Base = 0;
        float Height = 0;

        void getArea()
        {
            float area = .5 * Base * Height;
            cout << "Area of a Triangle: " << area << "\n";
        }

};

class Circle : Shape
{
    public:
        float Radius = 0;

        void getArea()
        {
            float area = 3.14 * pow(Radius, 2);
            cout << "Area of a Circle: " << area << "\n";
        }
};

int main()
{
    Rectangle rec;
    rec.Width = 10, rec.Height = 5;
    rec.getArea();

    Triangle tri;
    tri.Base = 3, tri.Height = 6;
    tri.getArea();

    Circle cir;
    cir.Radius = 4;
    cir.getArea();

}

