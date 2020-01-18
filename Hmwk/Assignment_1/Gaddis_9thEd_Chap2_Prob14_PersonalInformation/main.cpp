/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 9, 2020, 10:55 PM
 * Purpose: Display information about RCC. Notice: changed prompt to protect personal information.
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
    string name,        //Holds the name
           address,     //Holds the address
           telephone,   //Holds the telephone
           major;       //Holds the major
    //Initialize Variables
    name = "Alexander Ov";                               //Sets name to Alexander Ov
    address = "4800 Magnolia Ave, Riverside, CA 92506";  //Sets address to 4800 Magnolia Ave, Riverside, CA 92506
    telephone = "(951) 222-8000";                        //Sets telephone to (951) 222-8000
    major = "Computer Science";                          //Sets major to Computer Science
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout<< "Name: " << name << ".\n" << "Address: " << address << ".\n" << "Telephone: " << telephone << ".\n" << "Major: " << major << ".\n";  //Outputs informtion to user
    //Exit stage right!
    return 0;
}