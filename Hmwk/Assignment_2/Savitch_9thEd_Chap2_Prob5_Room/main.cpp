/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 15, 2020, 9:15 PM
 * Purpose: Find out if a a meeting is violating fire law regulations
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
   int people, roomCap;
   //Initialize Variables
   
   //Process or map Inputs to Outputs
   cout << "Input the maximum room capacity and the number of people\n";   //Asks for user input ot fill in values of room capacity and number of people
   cin >> roomCap;   
   cin >> people;
   if (people>roomCap)                                                                             //If there are more people than the room capacity outputs to user that there are too many people
   {
      cout << "Meeting cannot be held.\n";                                 
      cout << "Reduce number of people by " << people - roomCap << " to avoid fire violation.";
   }
   else                                                                                                     //Else display to user meeting can be held
   {
      cout << "Meeting can be held.\n";
      cout << "Increase number of people by " << roomCap - people << " will be allowed without violation.";
   }
   //Display Outputs

   //Exit stage right!
   return 0;
}