/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 6, 2015, 10:28 AM
 * Purpose: Learn how to save
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int month;   //Month of date
    unsigned int day;     //Day of date
    unsigned int year;    //Year of Date
    unsigned int magicNm; //Possible Magic Number Value
    
    //Input of Variables
    cout<<"Enter a Month, Day, and Year (MMDDYY)"<<endl;
    cin>>month>>day>>year; //Prompts user to input date
    
   //Calculate
    magicNm=day*month;  //Equation to calculate if a date is a magic number
    
    //Determine if Magic Date
    if (year==magicNm){
        cout<<"The Date is Magic"<<endl;
    }
        else 
        {
            cout<<"The Date is Not Magic"<<endl;
    } 
    
            
    return 0;
}