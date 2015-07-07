/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: To Calculate Currency Conversion
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float yenPDol=122.58f; //Yen to dollars
    float eurPDol=0.90f;   //Euros to dollars
    float usDolAm;         //Amount of US dollars to convert to yen and Euros
    float yenAmnt;         //Value of US dollars in Yen
    float eurAmnt;         //Value of US dollars in Euros
    
    //Input of Variables
    cout<<"Enter the US dollar amount to convert to Yen and Euros: "<<endl;
    cin>>usDolAm; //Prompts the user to enter a US dollar amount
    
    //Calculate the Conversion to Yen and Euros
    yenAmnt=usDolAm*yenPDol;  //Conversion from dollars to Yen
    eurAmnt=usDolAm*eurPDol;  //Conversion from dollars to Euros
    
    //Output of Results
    cout<<"The number of Yen = "
            <<showpoint<<fixed<<setprecision(2)<<yenAmnt<<endl;
    cout<<"The number of Euros = "
            <<showpoint<<fixed<<setprecision(2)<<eurAmnt<<endl; 
    
    //Exit Stage Right!
    return 0;
}

