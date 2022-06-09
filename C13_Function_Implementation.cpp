/*
Programmer: Ray, Stephen

Course: CSC161

Submission Date: [11/09/2021]

Function definitions used in the C13_Main program.

*/
#include "C13_Header.h"
#include <iostream>
#include <cstdlib>
using namespace std;

//The setLength() function receives input from the user and assigns this value to the protected length variable of the rectangleType class
//The function accepts an integer as a parameter to display the appropriate message to the user
void rectangleType::setLength(int num)
{
    double l = 0;

    if(num == 1)
    {
        cout << "Enter the length of rectangle 1: ";
        cin >> l;
    }
    else
    {
        cout << "Enter the length of rectangle 2: ";
        cin >> l;
    }

    length = l;
}

//The setWidth() function receives input from the user and assigns this value to the protected width variable of the rectangleType class
//The function accepts an integer as a parameter to display the appropriate message to the user
void rectangleType::setWidth(int num)
{
    double w = 0;

    if(num == 1)
    {
        cout << "Enter the width of rectangle 1: ";
        cin >> w;
    }
    else
    {
        cout << "Enter the width of rectangle 2: ";
        cin >> w;
    }

    width = w;
}

//The getLength() function returns the protected variable length and protects this data using const
double rectangleType::getLength() const
{
    return length;
}

//The getWidth() function returns the protected variable width and protects this data using const
double rectangleType::getWidth() const
{
    return width;
}

//The setArea() function calculates the area of a rectangle and assigns this value to the protected variable area
void rectangleType::setArea()
{
    double a = 0;

    a = length * width;

    area = a;
}

//The setPerimeter() function calculates the perimeter of a rectangle and assigns this value to the protected variable perimeter
void rectangleType::setPerimeter()
{
    double p = 0;

    p = 2 * (length + width);

    perimeter = p;
}

//The getArea() function returns the area member variable and protects this data with const
double rectangleType::getArea() const
{
    return area;
}

//The getPerimeter() function returns the perimeter member variable and protects this data with const
double rectangleType::getPerimeter() const
{
    return perimeter;
}

//The doubleDimensions() function of data type rectangleType doubles a rectangles dimensions
//The function returns the object using the pointer keyword this
rectangleType rectangleType::doubleDimensions()
{
    length = 2 * length;
    width = 2 * width;

    return *this;
}

//--------------------
//Operator Overloading
//--------------------

//Overload the addition operator passing rectangleType object by reference
rectangleType rectangleType::operator+(const rectangleType& rectangle) const
{
    rectangleType tempRect;

    tempRect.length = length + rectangle.length;
    tempRect.width = width + rectangle.width;

    return tempRect;
}

//Overload the subtraction operator passing rectangleType object by reference
//Include if statement to ensure result will not be negative
rectangleType rectangleType::operator-(const rectangleType& rectangle) const
{
    rectangleType tempRect;

    if(length < rectangle.length || width < rectangle.width)
    {
        cout << "\nUnable to subtract rectangle rectangle 1 from rectangle 4 because result is not positive.\n\n";
        tempRect.length = length;
        tempRect.width = width;
    }

    if(length >= rectangle.length || width >= rectangle.width)
    {
        tempRect.length = length - rectangle.length;
        tempRect.width = width - rectangle.width;
    }

    return tempRect;
}

//Overload the multiplication operator passing rectangleType object by reference
rectangleType rectangleType::operator*(const rectangleType& rectangle) const
{
    rectangleType tempRect;

    tempRect.length = length * rectangle.length;
    tempRect.width = width * rectangle.width;

    return tempRect;
}

//Overload the pre increment operator
void rectangleType::operator++()
{
    length++;
    width++;
}

//Overload the post increment operator, distinguished from pre increment by including int as parameter
void rectangleType::operator++(int)
{
    length++;
    width++;
}

//Overload the pre decrement operator and ensure the result will not be negative
void rectangleType::operator--()
{
    if(length - 1 < 0 || width -1 < 0)
    {
        cout << "\nUnable to decrement width or length because result is not positive.\n";
    }

    if(length - 1 >= 0 || width - 1 >= 0)
    {
        length--;
        width--;
    }


}

//Overload the post decrement operator and ensure the result will not be negative
void rectangleType::operator--(int)
{
    if(length - 1 < 0 || width -1 < 0)
    {
        cout << "Unable to decrement width or length because result is not positive.\n";
    }

    if(length - 1 >= 0 || width - 1 >= 0)
    {
        length--;
        width--;
    }
}

//Overload the relational operator == passing rectangleType object by reference
//The function bases rectangle measurement equality on area alone
bool rectangleType::operator==(const rectangleType& rectangle) const
{
    return (area == rectangle.area);
}

//Overload the relational operator != passing rectangleType object by reference
//The function bases rectangle measurement equality on area alone
bool rectangleType::operator!=(const rectangleType& rectangle) const
{
    return (area != rectangle.area);
}

//The print() function accepts an integer as a parameter to print an appropriate message to console
//The function uses a switch case to determine which message to print to console
void rectangleType::print(int num) const
{
    switch(num)
    {
    case 1:
        {
            cout << "-----------" << endl;
            cout << "Rectangle 1" << endl;
            cout << "-----------" << endl;
            break;
        }
    case 2:
        {
            cout << "-----------" << endl;
            cout << "Rectangle 2" << endl;
            cout << "-----------" << endl;
            break;
        }

    case 3:
        {
            cout << "-----------" << endl;
            cout << "Rectangle 3 (Adding rectangles 1 and 2)" << endl;
            cout << "-----------" << endl;
            break;
        }

    case 4:
        {
            cout << "-----------" << endl;
            cout << "Rectangle 4 (Multiplying rectangles 1 and 2)" << endl;
            cout << "-----------" << endl;
            break;
        }

    case 5:
        {
            cout << "------------" << endl;
            cout << "Rectangle 5 (Subtracting rectangle 1 from rectangle 4)" << endl;
            cout << "------------" << endl;
            break;
        }

    case 6:
        {
            cout << "----------------------------------------------------------------" << endl;
            cout << "After doubling the width and length dimensions of rectangle 1: \n";
            cout << "----------------------------------------------------------------\n" << endl;
            break;
        }
    }
    cout << "Length = " << length << "; Width = " << width << endl;
    cout << "The area of this rectangle is: " << area << endl;
    cout << "The perimeter of this rectangle is: " << perimeter << endl << endl;
}

//----------------------------------------------------------------------------------------------------
//The display() functions display headers to the console to help the user better understand the output
//----------------------------------------------------------------------------------------------------

void rectangleType::display1()
{
    cout << "----------------------------------------------------\n";
    cout << "Enter Length and Width Values for Rectangles 1 and 2\n";
    cout << "----------------------------------------------------\n";
}

void rectangleType::display2()
{
    cout << "\n----------------------------------" << endl;
    cout << "Initial Measurements of Rectangles" << endl;
    cout << "----------------------------------" << endl;
}

void rectangleType::display3()
{
    cout << "--------------------------------------------------\n";
    cout << "Check if the first and second rectangles are equal\n";
    cout << "--------------------------------------------------\n";
}

void rectangleType::display4()
{
    cout << "\n------------------------------------------" << endl;
    cout << "Increment and decrement rectangles 1 and 2" << endl;
    cout << "------------------------------------------\n" << endl;
}

//Constructor rectangleType() initializes the private variables of the rectangleType class
rectangleType::rectangleType()
{
    length = 0;
    width = 0;
    area = 0;
    perimeter = 0;
}


