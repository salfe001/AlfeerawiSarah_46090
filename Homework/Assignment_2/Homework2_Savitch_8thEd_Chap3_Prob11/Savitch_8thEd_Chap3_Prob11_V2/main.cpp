/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 2, 2015, 12:40 AM
 * Purpose: Approximate e^x with an infinite sequence
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
int main(int argc, char** argv){
    //Declare Variables
    float x=2.0f;   //The x in e^x
    float ex=1.0f;  //First term value in the exponential sequence
    float delt=1.0f;//Incremental Value for each term in the sequence
    float tol=1e-7; //Determine the accuracy for the approximation
    
    //Utilize a for-loop to calculate e^x
    for(int term=1;delt<-tol||delt>tol;delt*=x/term,ex+=delt,term++){
        
    }
    
    //Output the result
    cout<<fixed<<showpoint<<setprecision(15)<<endl;
    cout<<"Exact  e("<<x<<")="<<exp(x)<<endl;
    cout<<"Approx e("<<x<<")="<<ex<<endl;
    
    //Exit Stage Right!
    return 0;
}