/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 15, 2020, 10:24 PM
 * Purpose: Calculate how many calories are consumed
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
 int bagAmount = 40,      //Holds amount of cookies are in the bag
     servings = 10,       //Holds value of how many servings are in a bag
     bagCalories = 300;   //Holds value of 300 calories in a serving
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   int amountEaten, totalCal;                   //Holds values for amount of cookies eaten and total amount of calories
   //Initialize Variables
   cout << "Calorie Counter\n";                 //Displays title of program
   cout << "How many cookies did you eat?\n";   //Asks user to input how many cookies were eaten
   cin >> amountEaten;
   //Process or map Inputs to Outputs
   totalCal = (bagCalories/(bagAmount/servings))*amountEaten;  //Calculates how many calories were consumed
   //Display Outputs
   cout<< "You consumed " << totalCal <<" calories."; //Displays to user how many calories were consumed
   //Exit stage right!
   return 0;
}