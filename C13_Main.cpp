/*
Programmer: Ray, Stephen

Course: CSC161

Submission Date: [10/09/2021]

Main function of the C13 homework problem.

*/

#include <iostream>
// Include header file C13_Header.h
#include "C13_Header.h"

using namespace std;

int main()
{
    //-----------------------------------------------
    //Declare five rectangle objects of rectangleType
    //-----------------------------------------------

    rectangleType firstRectangle;
    rectangleType secondRectangle;
    rectangleType thirdRectangle;
    rectangleType fourthRectangle;
    rectangleType fifthRectangle;

    //------------------------
    //Initial display for user
    //------------------------

    firstRectangle.display1();

    //---------------------------------------------------------------------------------------------
    //Call getter and setter functions for rectangles 1 and 2 to establish their lengths and widths
    //---------------------------------------------------------------------------------------------

    firstRectangle.setLength(1);
    firstRectangle.setWidth(1);
    firstRectangle.getLength();
    firstRectangle.getWidth();

    secondRectangle.setLength(2);
    secondRectangle.setWidth(2);
    secondRectangle.getLength();
    secondRectangle.getWidth();

    //---------------------------------------------------------------
    //Assign rectangles 3, 4, and 5 values using overloaded operators
    //---------------------------------------------------------------

    thirdRectangle = firstRectangle + secondRectangle;
    fourthRectangle = firstRectangle * secondRectangle;
    fifthRectangle = fourthRectangle - firstRectangle;

    //----------------------------------------------------------------------------------------------------
    //Call getter and setter functions for all five rectangles to establish their area and perimeter values
    //----------------------------------------------------------------------------------------------------

    firstRectangle.setArea();
    firstRectangle.setPerimeter();
    firstRectangle.getArea();
    firstRectangle.getPerimeter();

    secondRectangle.setArea();
    secondRectangle.setPerimeter();
    secondRectangle.getArea();
    secondRectangle.getPerimeter();

    thirdRectangle.setArea();
    thirdRectangle.setPerimeter();
    thirdRectangle.getArea();
    thirdRectangle.getPerimeter();

    fourthRectangle.setArea();
    fourthRectangle.setPerimeter();
    fourthRectangle.getArea();
    fourthRectangle.getPerimeter();

    fifthRectangle.setArea();
    fifthRectangle.setPerimeter();
    fifthRectangle.getArea();
    fifthRectangle.getPerimeter();

    //--------------------------------------------------------------------
    //Print the initial values of the five rectangles for the user to view
    //--------------------------------------------------------------------

    firstRectangle.display2();

    firstRectangle.print(1);
    secondRectangle.print(2);
    thirdRectangle.print(3);
    fourthRectangle.print(4);
    fifthRectangle.print(5);

    //------------------------------------------------------------------------------------------------------
    //Relational operators == and != have been overloaded to return true if the two objects have equal areas
    //------------------------------------------------------------------------------------------------------

    firstRectangle.display3();

    if(firstRectangle == secondRectangle)
    {
        cout << "\nRectangle 1 and rectangle 2 are equal.\n\n";
    }

    else
    {
        cout << "\nRectangle 1 and rectangle 2 are not equal.\n\n";
    }

    //---------------------------------------------------------------------
    //Demonstrate post and pre increment and decrement overloaded operators
    //---------------------------------------------------------------------

    firstRectangle.display4();

    cout << "The first rectangle after incrementing length and width is: \n";
    ++firstRectangle;
    firstRectangle.print(1);

    cout << "The first rectangle after incrementing length and width again is: \n";
    firstRectangle++;
    firstRectangle.print(1);

    cout << "The second rectangle after decrementing length and width is: \n";
    --secondRectangle;
    secondRectangle.print(2);

    cout << "The second rectangle after decrementing length and width again is: \n";
    secondRectangle--;
    secondRectangle.print(2);

    //-------------------------------------------------------
    //Demonstrate doubleDimensions(length and width) function
    //-------------------------------------------------------

    firstRectangle.doubleDimensions();

    firstRectangle.print(6);


    return 0;
}
