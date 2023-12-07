/*
    Title:   Lab 1 - threepoints.cpp
    Purpose: read three points and determine if they form a line or triangle
    Author:  Chris Kendall
    Date:    September 26, 2022
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::setprecision;

double Slope(double, double, double, double);
double Length(double, double, double, double);
double Area(double, double, double);
double Perimeter(double, double, double);
double Angle(double, double, double);
double Degrees(double);


int main() {
    double pointOneX;
    double pointOneY;
    double pointTwoX;
    double pointTwoY;
    double pointThreeX;
    double pointThreeY;

    cout << "Input Point 1: ";
    cin >> pointOneX;
    cin >> pointOneY;
    cout << "Input Point 2: ";
    cin >> pointTwoX;
    cin >> pointTwoY;
    cout << "Input Point 3: ";
    cin >> pointThreeX;
    cin >> pointThreeY;

    // checking if it is a straight line
    if ((pointTwoY - pointOneY) / (pointTwoX - pointOneX) == (pointThreeY - pointOneY) / (pointThreeX - pointOneX)) {

        // checking if it is a straight vertical line
        if ((pointTwoX - pointOneX) == 0) {
            cout << "Infinite Slope" << endl;
            exit(0);
        }

        // deciding which two points are the end points
        double tempSlope = Slope(pointOneX, pointOneY, pointTwoX, pointTwoY);
        double tempLength = Length(pointOneX, pointOneY, pointTwoX, pointTwoY);
        double tempLength2 = Length(pointOneX, pointOneY, pointThreeX, pointThreeY);
        double tempLength3 = Length(pointTwoX, pointTwoY, pointThreeX, pointThreeY);
        if (tempLength < tempLength2) {
            tempLength = tempLength2;
        }
        if (tempLength < tempLength3) {
            tempLength = tempLength3;
        }

        // printing that it is a line along with its slope and length
        cout << "A Line" << endl;
        cout << "Slope:    " << fixed << setprecision(2) << tempSlope << endl;
        cout << "Length:   " << tempLength << endl;

        // the points are not a straight line ... they are a triangle
    } else {
        cout << "A Triangle" << endl;

        // printing out all of the side lengths
        cout << "Sides:" << endl;
        double sideOne = Length(pointOneX, pointOneY, pointTwoX, pointTwoY);
        double sideThree = Length(pointTwoX, pointTwoY, pointThreeX, pointThreeY);
        double sideTwo = Length(pointOneX, pointOneY, pointThreeX, pointThreeY);
        cout << "  " << fixed << setprecision(2) << sideOne << endl;
        cout << "  " << sideThree << endl;
        cout << "  " << sideTwo << endl;

        // printing out all of the angles
        cout << "Angles:" << endl;
        double angleOne = Angle(sideOne, sideTwo, sideThree);
        double angleThree = Angle(sideThree, sideTwo, sideOne);
        double angleTwo = Angle(sideTwo, sideOne, sideThree);
        cout << "  " << angleOne << endl;
        cout << "  " << angleThree << endl;
        cout << "  " << angleTwo << endl;

        // printing out all of the angles in degrees
        cout << "Angles (in degrees):" << endl;
        cout << "  " << Degrees(angleOne) << endl;
        cout << "  " << Degrees(angleThree) << endl;
        cout << "  " << Degrees(angleTwo) << endl;

        // printing the perimeter
        cout << "Perimeter:   " << Perimeter(sideOne, sideTwo, sideThree) << endl;

        // printing the area
        cout << "Area:        " << Area(sideOne, sideTwo, sideThree) << endl;
    }

    return 0;
}

// Calculates the slope of the line
// Params: four doubles that represent two points on the line
// Returns: a double representing the slope of the line
// Format Error: there should be no errors
double Slope(double x1, double y1, double x2, double y2){
    double slopeLine = (y2 - y1) / (x2 - x1);

    return slopeLine;
}

// Calculates the distance between the two points
// Params: four doubles that represent two points on the line
// Returns: a double representing the distance between these two points
// Format Error: there should be no errors
double Length(double x1, double y1, double x2, double y2){
    double tempLength = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2));

    return tempLength;
}

// Calculates the area of the triangle
// Params: three doubles that represent the length of each of the triangles sides
// Returns: a double representing the area of the triangle
// Format Error: there should be no errors
double Area(double side1, double side2, double side3){
    double semiPerimeter = (side1 + side2 + side3) / 2;
    double tempArea = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

    return tempArea;
}

// Calculates the perimeter of the triangle
// Params: three doubles that represent the length of each side
// Returns: the perimeter of a triangle defined by the lengths of its sides
// Format Error: there should be no errors
double Perimeter(double side1, double side2, double side3){
    double tempPerimeter = side1 + side2 + side3;

    return tempPerimeter;
}

// Calculates the interior angle opposite to the length of the first parameter
// Params: three doubles that represent the length of each of the three sides
// Returns: a double representing the angle, in radians, of the angle opposite the first parameter
// Format Error: there should be no errors
double Angle(double side1, double side2, double side3){
    double tempAngle = acos((pow(side2, 2) + pow(side3, 2) - pow(side1, 2)) / (2 * side2 * side3));

    return tempAngle;
}

// Converts radians to degrees
// Params: one double that represents an angle in radians
// Returns: a double representing the angle in degrees
// Format Error: there should be no errors
double Degrees(double angle){
    double tempDegrees = (angle * 180 / M_PI);

    return tempDegrees;
}
