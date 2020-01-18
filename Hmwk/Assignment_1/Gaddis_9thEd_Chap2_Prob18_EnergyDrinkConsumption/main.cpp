/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 9, 2020, 8:40 PM
 * Purpose: Find the approximate number of people who consume energy drinks
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
   int surveyAmount,             //Holds amount of people surveyed
       onePerWeekAmount,         //Holds amount of people the buy energy drinks once per week
       citrusDrinkerAmount;      //Holds amount of people who prefer citrus-flavored drinks
   double onePerWeekPercent,     //Holds amount of percent of people who buy energy drinks once per week
          citrusDrinkerPercent;  //Holds amount of percent of people who prefer citrus-flavored drinks
    //Initialize Variables
   surveyAmount = 16500;         //Set the amount of people who where surveyed to 16,500
   onePerWeekPercent = 0.15;     //Set the percent of people who buy energy drinks once per week to 15% 
   citrusDrinkerPercent = 0.58;  //Set the percent of people who prefer citrus drink to 58% 
    //Process or map Inputs to Outputs
   onePerWeekAmount = surveyAmount*onePerWeekPercent;       //calculates the amount of people who buy energy drinks once per week
   citrusDrinkerAmount = surveyAmount*citrusDrinkerPercent; //calculates the amount of people who prefer energy drinks
    //Display Outputs
   cout<<"Amount of people that purchase one or more energy drinks per week " << onePerWeekAmount << " People.\n";   //Outputs to user how many people who buy energy drinks once per week
   cout<<"Amount of people that prefer citrus-flavored energy drinks " << citrusDrinkerAmount << " People.\n";       //Outputs to user how many people who prefer citrus-flavored drinks
    //Exit stage right!
    return 0;
}