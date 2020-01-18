/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 15, 2020, 10:32 PM
 * Purpose: Use trig functions to calculate angles
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const double PI = 3.14159265; //HOld constant PI
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   float degree;  //Holds value of the degree
   //Initialize Variables
   
   //Process or map Inputs to Outputs
   cout << "Calculate trig functions\n" << "Input the angle in degrees.\n";   // Asks user for the degree of the angle
   cin >> degree;
   //Display Outputs
   cout << setprecision(0) << fixed << "sin(" << degree << ") = " << setprecision(4) << fixed << sin(degree*PI/180) << endl;  //Displays to user calcualted values of the trig functions
   cout << setprecision(0) << fixed << "cos(" << degree << ") = " << setprecision(4) << fixed << cos(degree*PI/180) << endl;
   cout << setprecision(0) << fixed << "tan(" << degree << ") = " << setprecision(4) << fixed << tan(degree*PI/180);
   //Exit stage right!
   return 0;
}