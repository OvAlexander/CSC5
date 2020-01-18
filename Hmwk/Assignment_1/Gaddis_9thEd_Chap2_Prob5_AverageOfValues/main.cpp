/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 11, 2020, 1:21 AM
 * Purpose: Finds the average value of 5 numbers
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
   int sum,       //Holds the sum value
       average;   //Holds the average value 
   //Initialize Variables
   
   //Process or map Inputs to Outputs
   sum = 28+32+37+24+33;   //Sets sum equal to the 5 numbers added up
   average = sum/5;        //Divides sum by 5 to find average
   //Display Outputs
   cout<< "The average of the 5 numbers is: " << average;   //Displays to user the average value
   //Exit stage right!
   return 0;
}