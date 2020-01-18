/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 16, 2020, 1:52 AM
 * Purpose: Calculates retroactive pay and salary
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
   float payInc, pAniSal,rtrPy;  //Holds values for pay increase, previous annual salary, and retroactive pay
   //Initialize Variables
   payInc = 0.076;   //Sets pay increase to %7.6
   //Process or map Inputs to Outputs
   cout << "Input previous annual salary.\n";   //Asks user for previous annual salary
   cin >> pAniSal;
   rtrPy = ((pAniSal/12)*payInc)*6;             //Calculates retroactive pay
   //Display Outputs
   cout << "Retroactive pay    = $" << setprecision(2) << fixed << setw(7) << rtrPy << endl;             //Outputs to user Retroactive pay, annual salary and monthly salary
   cout << "New annual salary  = $" << setprecision(2) << fixed << setw(7) << rtrPy*2 + pAniSal << endl;
   cout << "New monthly salary = $" << setprecision(2) << fixed << setw(7) << (rtrPy*2+pAniSal)/12;
   //Exit stage right!
   return 0;
}