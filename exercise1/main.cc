#include <iostream>
#include "square.h"
#include "circle.h"
#include "equilateral_triangle.h"

using namespace std;

void print_menu()
{
    cout << "0 - Calc the area of a Square\n";
    cout << "1 - Calc the area of a Circle\n";
    cout << "2 - Calc the area of a Equilateral Triangle\n";
    cout << "3 - Exit\n";
    cout << "\nPlease enter your choice: ";
}

bool process()
{
    int opt;
    cin >> opt;
    system("cls");
    switch (opt)
    {
    case 0:
    {
        double side;
        cout << "Please enter the side length of the Square: ";
        cin >> side;
        Square *pS = new Square(side);
        cout << "Area of Square: " << pS->area() << endl;
        break;
    }
    case 1:
    {
        double radius;
        cout << "Please enter the radius of Circle: ";
        cin >> radius;
        Circle *pC = new Circle(radius);
        cout << "Area of Circle: " << pC->area() << endl;
        break;
    }
    case 2:
    {
        double side;
        cout << "Please enter the side length of the Equilateral Triangle: ";
        cin >> side;
        EquilateralTriangle *pET = new EquilateralTriangle(side);
        cout << "Area of Equilateral Triangle: " << pET->area() << endl;
        break;
    }
    case 3:{
        return false;
    }
    default:
        cout << "Invalid choice. Please enter a valid number!";
        break;
    }
    system("pause");
    system("cls");
    return true;
}

int main()
{
    int loop = true;
    while (loop)
    {
        print_menu();
        loop = process();
    }

    return 0;
}