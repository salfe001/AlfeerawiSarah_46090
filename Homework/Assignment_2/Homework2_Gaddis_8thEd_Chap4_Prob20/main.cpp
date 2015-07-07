/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: Amount of time sound wave travels through medium
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
    float dist;   //Distance in feet
    float speed;  //Speed in feet per second
    float time;   //Time in seconds
    int choice;   //Choice of Medium
    
    //Input of Variables
    cout<<"1-Air\n2-Water\n3-Steel"<<endl;  //Display menu
    cout<<"Enter choice of medium: ";         
    cin>>choice;                            //Prompt to input medium
    cout<<"Enter distance in meters: ";
    cin>>dist;                              //Prompt to input distance
    
    //Output of Results
    switch(choice)
    {
    case 1: speed=1100;
            time=dist/speed;
            cout<<"Time sound travels: "
                    <<showpoint<<fixed<<setprecision(4)<<time<<"(secs)"<<endl;
            break;
    case 2: speed=4900;
            time=dist/speed;
            cout<<"Time sound travels: "
                    <<showpoint<<fixed<<setprecision(4)<<time<<"(secs)"<<endl;
            break;
    case 3: speed=16400;
            time=dist/speed;
            cout<<"Time sound travels: "
                    <<showpoint<<fixed<<setprecision(4)<<time<<" (secs)"<<endl;
            
            break;
    }
    
            
    return 0;
}

