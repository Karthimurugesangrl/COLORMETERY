// Create an enum for using the follwoing Data:
// Red = 0, Green = 1, Blue = 2, Black = 3, White = 4 

// Create a struct to store 
// a. Color as enum number, 
// b. string with color name, 
// c. RGB Value (RGB value will be an array of three 8 bit data types.)
// Red (255,0,0)
// Green (0,255,0)
// Blue (0,0,255)
// Black (0,0,0)
// White (255,255,255)

// If the user inputs number number 'n' from console, the RGB values of the color will be dispalyed
// eg. If user inputs 2, the following will be diaplyed.
// Color : Blue ==> (0,0,255)

#include <iostream>
using namespace std;

enum colorspace 
{Red=0,
Green=1,
Blue=2,
Black=3,
White=4
};
struct space 
{
 colorspace color; 
};
int main()
{
    return 0;
}


