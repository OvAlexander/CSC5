/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on January 9, 2020, 9:06 PM
 * Purpose: Calculates the amount paid for stocks
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
    double costOfShare,          //Holds the cost of the shares
           commissionPercent,    //Holds commission percentage
           amountPaidStockAlone, //Holds stock amount
           amountPaidCommission, //Holds commission amount
           totalAmountPaid;      //Holds total amount paid
    int amountOfShares;          //Holds amount of shares
    //Initialize Variables
    costOfShare = 35.0;       //Sets the cost of the shares to $35
    commissionPercent = .02;  //Sets the commission percentage to 2%
    amountOfShares = 750;     //Sets the amount of shares to 750
    //Process or map Inputs to Outputs
    amountPaidStockAlone = costOfShare*amountOfShares;            //Calculates the amount paid for the stocks
    amountPaidCommission = commissionPercent*amountOfShares;      //Calculates the commission amount for the stocks
    totalAmountPaid = amountPaidStockAlone+amountPaidCommission;  //Calculates the total amount paid for the stocks
    //Display Outputs
    printf("Amount paid for the stock alone $%.2f. \n", amountPaidStockAlone);   //Outputs to user the amount paid for the stocks
    printf("Amount paid for commission $%.2f. \n", amountPaidCommission);        //Outputs to user the commission amount for the stocks
    printf("Amount paid total $%.2f. \n", totalAmountPaid);                      //Outputs to user the total amount paid for the stocks
    //Exit stage right!
    return 0;
}