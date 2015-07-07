/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: To Calculate Degrees Fahrenheit
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
    float degCels; //Temperature in degrees Celsius
    float degFahr; //Temperature in degrees Fahrenheit
    
    //Input of Variables
    cout<<"Enter the temperature in degrees Celsius: "<<endl;
    cin>>degCels;  //Prompts user to input the Celsius temperature
    
    //Calculate Degrees Fahrenheit
    degFahr=(1.8*degCels+32);  //Equation to convert to Fahrenheit
    
    //Output of Results
    cout<<"The temperature in degrees Fahrenheit = "<<degFahr<<endl;
    
    //Exit Stage Right!
    
    return 0;
}

