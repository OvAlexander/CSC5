/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 15, 2020, 10:08 PM
 * Purpose: Convert Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables

//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   float fTemp;   //Holds Fahrenheit temp
   //Initialize Variables

   //Process or map Inputs to Outputs
   cout << "Temperature Converter\n";     //Displays title of program
   cout << "Input Degrees Fahrenheit\n";  //Asks user for temp in Fahrenheit
   cin >> fTemp;                          
   //Display Outputs
   cout << setprecision(1) << fixed << fTemp << " Degrees Fahrenheit = " << (fTemp-32)*5/9 << " Degrees Centigrade"; //Outputs to user Fahrenheit to Celsius
   //Exit stage right!
   return 0;
}