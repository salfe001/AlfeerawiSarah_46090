/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 2, 2015, 11:05 AM
 * Purpose: Generate crud based upon the Fibonacci Sequence
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int nSecs; //Number of Seconds
    int yrs;   //Number of Years
    int mnths; //Number of Months
    int weeks; //Number of Weeks
    int days;  //Number of Days
    int hrs;   //Number of Hours
    int min;   //Number of Minutes
    int secs;  //Number of Seconds
    
    //Prompt for the number of seconds
    cout<<"How many seconds to convert?"<<endl;
    cin>>nSecs;
    
    //Calculate Conversions
    yrs=nSecs/31536000;  //Conversion to Number of Years
    mnths=nSecs/2592000; //Conversion to Number of Months
    weeks=nSecs/604800;  //Conversion to Number of Weeks
    days=nSecs/86400;    //Conversion to Number of Days
    hrs=nSecs/3600;      //Conversion to Number of Hours
    min=nSecs/60;        //Conversion to Number of Minutes
    secs=nSecs/1;        //Conversion to Number of Seconds
    
    //Output the Results
    cout<<"Converted to:"<<endl;
    cout<<"Years:   "<<yrs<<endl;
    cout<<"Months:  "<<mnths<<endl;
    cout<<"Weeks:   "<<weeks<<endl;
    cout<<"Days:    "<<days<<endl;
    cout<<"Hours:   "<<hrs<<endl;
    cout<<"Minutes: "<<min<<endl;
    cout<<"Seconds: "<<secs<<endl;
    
    //Exit Stage Right!
        
    return 0;
}

