/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 10, 2020, 11:23 PM
 * Purpose: Calculate the MPG of a car
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables

//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   int carCap,          //Holds the value of how much gas the car can hold
       carDist,         //Holds the value for the cars distance traveled
       milesPerGallon;  //Holds the value for MPG
   //Initialize Variables
   carCap = 15;   //Sets carCap to a value of 15
   carDist = 375; //Sets carDist to a value of 375
   //Process or map Inputs to Outputs
   milesPerGallon = carDist/carCap; //Calculates the MPG of the car
   //Display Outputs
   cout<< "This car gets " << milesPerGallon << " MPG."; //Displays to the user how much MPG they get
   //Exit stage right!
   return 0;
}