/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 15, 2020, 12:33 AM
 * Purpose: Displays minimum amount of insurance a person should buy
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
float recPercent = .8;  //Declares a constant value of the recommended amount of 80%
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   float houseVal;   //Holds value of users house
   //Initialize Variables
   
   //Process or map Inputs to Outputs
   cout << "Insurance Calculator\n";            //Displays title of program
   cout << "How much is your house worth?\n";   //Asks user for value of thier house
   cin >> houseVal;                             
   //Display Outputs
   cout << "You need $" << houseVal*recPercent << " of insurance.";   //Displays to user amount of insurance needed
   //Exit stage right!
   return 0;
}