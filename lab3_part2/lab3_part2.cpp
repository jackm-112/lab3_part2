// lab3_part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double x = 5.0;
    double y = 6.0;
    
    double *xPt = &x;
    double *yPt = &y;

    //displays the values of the doubles x & y
    cout << "x = " << x << ", y = " << y << "\n \n";

    //displays the values of the doubles x & y, but using pointers!
    cout << "now, using pointers! \n";
    cout << "x = " << *xPt << ", y = " << *yPt << "\n \n";

    //gets the sum of the two variables using pointers.
    cout << "x + y = " << *xPt + *yPt;
}