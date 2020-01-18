/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 9, 2020, 8:26 PM
 * Purpose: Calculate the sale price of a circuit board
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
    double percent,        //Holds the profit percentage
           circuitCost,    //Holds the cost of the circuit
           profitAmmount,  //Holds the amount of profit
           circuitPrice;   //Holds the total circuit price
    //Initialize Variables
    percent = 0.35;        //Sets the profit percentage to 35%
    circuitCost = 14.95;   //Sets the circuit cost to $14.95
    //Process or map Inputs to Outputs
    profitAmmount = circuitCost * percent;         //Calculates the amount of profit
    circuitPrice = (circuitCost + profitAmmount);  //Calculates the price of the circuit
    //Display Outputs
    printf("Price for 35 Percent Profit: $%.2f" , circuitPrice);  //Outputs the results to user
    //Exit stage right!
    return 0;
}