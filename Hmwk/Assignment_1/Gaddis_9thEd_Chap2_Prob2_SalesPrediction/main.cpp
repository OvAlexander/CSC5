/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 11, 2020, 1:27 AM
 * Purpose: Predict how the sales generated by East Coast sales
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
   double eastCoastPrediction,   //Holds the prediction for the east coast
          eastCoastPercent,      //Holds the percentage for East Coast sales generation
          companySales;          //Holds the yearly company sales
   //Initialize Variables
   eastCoastPercent = 0.58; //Sets the east coast percentage to 58%
   companySales = 8.6;      //Sets the Company Sales to 8.6 Million
   //Process or map Inputs to Outputs
   eastCoastPrediction = companySales*eastCoastPercent;  //Calculates the predicted outcome
   //Display Outputs
   cout<< "The East Coast sales division is predicted to make $" << fixed << setprecision(1) << eastCoastPrediction << " million in sales this year.";   //Displays to the user the predicted sales outcome
   //Exit stage right!
   return 0;
}