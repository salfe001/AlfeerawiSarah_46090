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
    //Declare and Initialize Variables
    float wvLnMtr;//Wave length in Meters
    
    //Loop
    do{
        //Prompt for input
        cout<<"Input the wave length in meters"<<endl;
        cin>>wvLnMtr;
        //Output the spectrum band
        if     (wvLnMtr>1e-2 )cout<<wvLnMtr<<"(mtrs) is in the Radio Wave Band "<<endl;
        else if(wvLnMtr>1e-7 )cout<<wvLnMtr<<"(mtrs) is in the Micro Wave Band "<<endl;
        else if(wvLnMtr>7e-7 )cout<<wvLnMtr<<"(mtrs) is in the Infrared Band   "<<endl;
        else if(wvLnMtr>4e-7 )cout<<wvLnMtr<<"(mtrs) is in the Visible Band    "<<endl;
        else if(wvLnMtr>1e-8 )cout<<wvLnMtr<<"(mtrs) is in the Ultraviolet Band"<<endl;
        else if(wvLnMtr>1e-11 )cout<<wvLnMtr<<"(mtrs) is in the X-Ray Band      "<<endl;
        else                  cout<<wvLnMtr<<"(mtrs) is in the Gamma Ray Band  "<<endl;
    }while(wvLnMtr!=1);
    
    //Exit Stage Right!   
    return 0;
}

