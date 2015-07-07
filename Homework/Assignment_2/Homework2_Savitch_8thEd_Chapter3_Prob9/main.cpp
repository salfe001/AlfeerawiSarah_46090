/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 2, 2015, 11:05 AM
 * Purpose: Generate crud based upon the Fibonacci Sequence
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
    //Declare and initialize members of the sequence
    unsigned short fi=1, fip1=1, fip2;
    unsigned char terms=10;
    float crudWt,nDays;
    
    //Print the initial conditions
    cout<<"Input the initial crud weight in lbs"<<endl;
    cin>>crudWt;
    cout<<"Input the number of days allowed to grow"<<endl;
    cin>>nDays;
    
    //Scale the nDays to the Fibonacci Sequence
    terms=nDays/5+1;//Scale by 5 days and start at an term=1;
    
    //Given the 3 Conditions
    if(terms==1){
        cout<<"The crud wt after "<<nDays<<" = "<<crudWt<<"(lbs)"<<endl;
    }else if (terms==2){
        cout<<"The crud wt after "<<nDays<<" = "<<crudWt<<"(lbs)"<<endl;
        
    }else{
        //Loop and show terms as you generate
        for(unsigned char term=3;term<=terms;term++){
                //Calculate the next term in the sequence
                fip2=fi+fip1;
                //Output the current term
                //cout<<"Term "<<static_cast <int>(term)<<" in the sequence = "<<fip2<<endl;
                //Now shift
                fi=fip1;
                fip1=fip2;
        }
        cout<<"The crud wt after "<<nDays<<" = "<<fip2*crudWt<<"(lbs)"<<endl;
        
    }
    
    //Exit Stage Right!

    return 0;
    }

