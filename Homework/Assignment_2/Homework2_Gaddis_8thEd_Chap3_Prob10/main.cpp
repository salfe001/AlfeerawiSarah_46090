/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: To Calculate the minimum amount of insurance to buy for property
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float pctInsr=.80f; //Percent of replacement cost recommended to insure
    float rplCost;       //Owners replacement cost of building in dollars
    float minInsr;       //Minimum amount of insurance recommended to buy
    
    //Input of Variables
    cout<<"Enter the replacement cost of your building: "<<endl;
    cin>>rplCost;  //User prompted to enter the replacement cost
    
    //Calculate Minimum Amount of Insurance
    minInsr=rplCost*pctInsr;  //Equation for minimum amount of insurance
    
    //Output of Results
    cout<<"The Minimum Amount of Insurance = $"<<minInsr<<endl;
   
    //Exit Stage Right!
    
    return 0;
}

