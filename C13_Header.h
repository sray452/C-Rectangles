/*
Programmer: Ray, Stephen

Course: CSC161

Submission Date: [11/09/2021]

Header file for the C13 homework problem.

*/

#ifndef C13_HEADER_H
#define C13_HEADER_H

class rectangleType
{
    //Protected variables of the class can be accessed by member functions and friend functions of class rectangleType
    protected:
        double length;
        double width;
        double area;
        double perimeter;

    // Public member functions of class rectangleType
    public:
        //Getter and setter functions of rectangleType allow values to be stored in the protected variables
        //Getter functions have const to preserve data integrity
        void setLength(int num);
        void setWidth(int num);
        double getLength() const;
        double getWidth() const;
        void setArea();
        void setPerimeter();
        double getArea() const;
        double getPerimeter() const;

        //Overload the addition, subtraction, and multiplication operators
        //Pass object rectangleType by reference as an argument
        rectangleType operator+(const rectangleType&) const;
        rectangleType operator-(const rectangleType&) const;
        rectangleType operator*(const rectangleType&) const;

        //Overload the relational operators == and !=
        //Pass object rectangleType by reference as an argument
        bool operator==(const rectangleType&) const;
        bool operator!=(const rectangleType&) const;

        //Overload the pre-increment and pre-decrement operators ++ and --
        void operator++();
        void operator--();

        //Overload the post-increment and post-decrement operators ++ and --
        void operator++(int);
        void operator--(int);

        //The doubleDimensions() function with a data type of rectangleType doubles a rectangles width and length
        rectangleType doubleDimensions();

        //The print() function accepts an integer as a parameter and prints output for the user
        void print(int num) const;

        //Display messages to console made into functions to avoid cluttering the main function
        void display1();
        void display2();
        void display3();
        void display4();

        //Class constructor
        rectangleType();

};

#endif // C13_HEADER_H
