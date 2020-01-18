/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 15, 2020, 11:06 PM
 * Purpose: Find the lethal dose of diet coke
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float LBS_GRAM_CONVERSION = 453.592;  //Conversion variable for lbs to grams
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   const float SODA_SWEET = 1e-3f;  //Holds value for how much sweetener is in the soda
   const float SODA_MASS = 350;     //Holds value for how much mass the soda is
   float mMass, mDose, dsrMass;     //Holds value for mass of mouse, deadly dose for mouse, and wanted mass 
   int totalCan;                    //Holds value for how many cans they can drink
   //Initialize Variables
   mMass = 35;  //Sets mouse mass to 35g
   mDose = 5;   //Sets mouse dose to 5g
   //Process or map Inputs to Outputs
   cout << "Program to calculate the limit of Soda Pop Consumption." <<endl;            //Title of program
   cout << "Input the desired dieters weight in lbs.\n";                                //Asks for users desired weight
   cin >> dsrMass;
   totalCan = dsrMass * LBS_GRAM_CONVERSION * mDose / (mMass * SODA_MASS * SODA_SWEET); //Calculates the amount of cans they can drink
   //Display Outputs
   cout << "The maximum number of soda pop cans\n" << "which can be consumed is " << totalCan << " cans";   //Displays to user how many cans they can drink
   //Exit stage right!
   return 0;
}