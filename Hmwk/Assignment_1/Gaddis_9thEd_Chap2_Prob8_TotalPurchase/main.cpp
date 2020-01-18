/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 10, 2020, 11:23 PM
 * Purpose: Calculate the total cost of a customer's items
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
   double item1, //Holds the price of the first item
           item2,//Holds the price of the second item
           item3,//Holds the price of the third item
           item4,//Holds the price of the fourth item
           item5,//Holds the price of the fifth item
           total;//Holds the value of the total sum of items
   //Initialize Variables
   item1 = 15.95; //Sets the price of the first item to $15.95
   item2 = 24.95; //Sets the price of the second item to $24.95
   item3 = 6.95;  //Sets the price of the third item to $6.95
   item4 = 12.95; //Sets the price of the fourth item to $12.95
   item5 = 3.95;  //Sets the price of the fifth item to $3.95
   //Process or map Inputs to Outputs
   total = item1+item2+item3+item4+item5; //Calculates the total price by adding up the prices of all 5 items
   //Display Outputs
   cout<< "The total price for the five items is $" << total << "."; //Outputs the total price to the user
   //Exit stage right!
   return 0;
}