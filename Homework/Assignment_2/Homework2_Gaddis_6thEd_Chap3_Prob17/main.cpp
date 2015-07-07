/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 1, 2015, 11:02 AM
 * Purpose: To calculate the monthly payment
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float ir=.01f;               //Interest Rate per month
    unsigned short loan=10000;   //Loan Amount in dollars
    unsigned char nMonths=36;    //Number of Months (Payments)
    float mnthPay;               //Monthly Payment in dollars
    float temp=1.0f;             //Intermediate value in monthly payment equation
    float cstLoan;               //Cost of the loan in dollars
    float totCost;               //total paid back to lender
    
    //Calculate the Intermediate Value
    float onePlsi=(1+ir);
    for(int months=1;months<=nMonths;months++){
        temp*=onePlsi;
    }
    
    //Calculate the monthly payment
    mnthPay=(ir*temp*loan)/(temp-1);
    mnthPay+static_cast<int>(mnthPay*100/100.0f);  //Exact amount in pennies
    totCost=nMonths*mnthPay;
    cstLoan=totCost-loan;
    
    //Output the results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Loan Amount:          $"<<setw(8)<<loan*1.0f<<endl;
    cout<<"Monthly Interest Rate: "<<setw(8)<<ir*100<<"%"<<endl;
    cout<<"Number of Payments:    "<<setw(8)<<static_cast<int>(nMonths)<<endl;
    cout<<"Monthly Payment:      $"<<setw(8)<<mnthPay<<endl;
    cout<<"Amount Paid Back:     $"<<setw(8)<<totCost<<endl;
    cout<<"Interest Paid:        $"<<setw(8)<<cstLoan<<endl;
    
    //Exit Stage Right
    
    

    return 0;
}

