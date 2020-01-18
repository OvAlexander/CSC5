/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 10, 2020, 11:41 PM
 * Purpose: Calculate the annual high temperature of cities
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
   int newYorkTemp,     //Holds the temp for New York
       denverTemp,      //Holds the temp for Denver
       phoenixTemp,     //Holds the temp for Phoenix
       newYorkHighTemp, //Holds the high temp for New York
       denverHighTemp,  //Holds the high temp for Denver
       phoenixHighTemp; //Holds the high temp for Phoenix
   //Initialize Variables
   newYorkTemp = 85;    //Sets the temp of New York to 85
   denverTemp = 88;     //Sets the temp of Denver to 88
   phoenixTemp = 106;   //Sets the temp of Phoenix to 106
   //Process or map Inputs to Outputs
   newYorkHighTemp = (newYorkTemp*0.02)+newYorkTemp;  //Calculates the high temp for New York
   denverHighTemp = (denverTemp*0.02)+denverTemp;     //Calculates the high temp for Denver
   phoenixHighTemp = (phoenixTemp*0.02)+phoenixTemp;  //Calculates the high temp for Phoenix
   //Display Outputs
   cout<< "Average July High Temperature if raised by 2%. \n" << "New York: " << newYorkHighTemp << " degrees Fahrenheit.\n" << "Denver: " << denverHighTemp << " degrees Fahrenheit.\n" << "Phoenix: " << phoenixHighTemp << " degrees Fahrenheit.\n"; //Prints to user the new temps
   //Exit stage right!
   return 0;
}