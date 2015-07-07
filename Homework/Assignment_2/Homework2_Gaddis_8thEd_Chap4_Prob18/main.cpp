/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: To calculate the total calories and percent calories from fat
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
    float cals;      //Number of Calories
    float fat;       //Grams of Fat
    float total;     //Calories Plus Fat Calories
    float fClPtot;   //Ratio of Fat Calories to Total Calories
    
    //Input Calories of Food
    cout<<"Enter number of calories in food:     "<<endl;
    cin>>cals;
    if(cals<=0)
    {
        cout<<"Input cannot be less than or equal to zero:"<<endl;
        cout<<"Enter calories in food: "<<endl;
        cin>>cals;
    }
    
    cout<<"Enter number of grams of fat in food: "<<endl;
    cin>>fat;
    if(fat<=0)
    {
        cout<<"Input cannot be less than or equal to zero:"<<endl;
        cout<<"Enter grams of fat in food: "<<endl;
        cin>>fat;
    }
    total=0;
    
    //Calculating Total Calories and Percentage Calories
    total=cals+(fat*9.0f); //Equation for total calories
    fClPtot=(fat*9.0f/total)*100.0f;
    
    //Output of Results
    cout<<"The total number of calories     = "<<total<<endl;
    cout<<"The percent of calories from fat = "
            <<showpoint<<fixed<<setprecision(1)<<fClPtot<<"(%)"<<endl;
    
    //Check Fat Calories
    if(fClPtot<=30){
        cout<<"Calories of fat from food is low"<<endl;
    }
    if(fClPtot>30){
        cout<<"Calories of fat from food is high"<<endl;
            
    }
    return 0; 
}

