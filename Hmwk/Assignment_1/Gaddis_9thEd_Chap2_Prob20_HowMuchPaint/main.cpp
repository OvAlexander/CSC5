/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 9, 2020, 9:56 PM
 * Purpose: Calculate the amount of gallons of paint needed
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
    int paintInGallon,  //Holds the paint in gallons
        fenceHeight,    //Holds the fence height
        fenceLength,    //Holds the fence length
        fenceDim;       //Holds how big the fence is
    double paintNeeded; //Holds how much paint is needed
    //Initialize Variables
    paintInGallon = 340;   //Sets the amount of paint in a gallon to 340
    fenceHeight = 6;       //Sets fence height to 6
    fenceLength = 100;     //Sets fence length to 100
    //Process or map Inputs to Outputs
    fenceDim = fenceHeight*fenceLength*2;                                                                         //Calculates the fence size for 2 coats
    paintNeeded = (fenceDim/paintInGallon)+ (((fenceDim < 0) ^ (paintInGallon > 0)) && (fenceDim%paintInGallon)); //Calculates how much paint is needed
    //Display Outputs
    cout<< "Amount of paint gallons needed to cover fence twice: "<< paintNeeded <<" Gallons."; //Outputs to user how much paint is needed
    //Exit stage right!
    return 0;
}