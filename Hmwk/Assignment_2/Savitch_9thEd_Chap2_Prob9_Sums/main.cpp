/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 15, 2020, 9:14 PM
 * Purpose: Calculate the sum of 10 numbers
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
   int num, nsum, psum;    //Holds values for the sums and user inputed number
   //Initialize Variables
    num = 0;   //Resets values of variables
    psum = 0;
    nsum = 0;
   //Process or map Inputs to Outputs
   cout << "Input 10 numbers, any order, positive or negative\n"; //Asks user for 10 numbers
   for(int i = 1; i<=10; i++)                                     //Loops for 10 cycles
   {
      cin >> num;                                                 //Takes number from user
      if(num>0)                                                   //If the number is positive add to psum
      {
         psum = num + psum;
      }
      else if(num<0)                                              //If the number is positive add to nsum
      {
         nsum = nsum + num;
      }
   }
   //Display Outputs
   cout << "Negative sum =" << setw(4) << nsum << endl;  //Displays to user the sums
   cout << "Positive sum =" << setw(4) << psum << endl;
   cout << "Total sum    =" << setw(4) << nsum + psum;
   //Exit stage right!
   return 0;
}