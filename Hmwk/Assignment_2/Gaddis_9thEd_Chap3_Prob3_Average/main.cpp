/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 15, 2020, 12:06 AM
 * Purpose: Get 5 test scores and find the average
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
   float score1, score2, score3, score4, score5, average;   //Sets multiple variables to hold the score values and average value
   //Initialize Variables
   
   //Process or map Inputs to Outputs
   cout << "Input 5 numbers to average.\n";                     //Asks for user input to enter a score value
   cin >> score1;                                              
   cin >> score2;
   cin >> score3;
   cin >> score4;
   cin >> score5;
   average = (score1 + score2 + score3 + score4 + score5)/5;   //Finds the average
   //Display Outputs
   cout << "The average = "  <<setprecision(1) << fixed << average; //Outputs average score to user
   //Exit stage right!
   return 0;
}