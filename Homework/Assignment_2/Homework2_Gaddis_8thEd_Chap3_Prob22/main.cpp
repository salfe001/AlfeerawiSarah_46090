/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: Amount of time sound wave travels through medium
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float radians;  //Angle in radians
    float y;        //Value of executed trig function
    
    //Input Number of Radians
    cout<<"Enter the number of radians: "<<endl;
    cin>>radians;
    
    //Calculate Trig Function
    y=sin(radians);
    cout<<"sin of angle = "<<showpoint<<fixed<<setprecision(2)<<y<<endl;
    y=cos(radians);
    cout<<"cos of angle = "<<showpoint<<fixed<<setprecision(2)<<y<<endl;
    y=tan(radians);
    cout<<"tan of angle = "<<showpoint<<fixed<<setprecision(2)<<y<<endl;
    
    
    return 0;
}

