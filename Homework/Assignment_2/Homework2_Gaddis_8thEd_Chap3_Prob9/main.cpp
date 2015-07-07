/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: To Calculate Calories an Individual Consumes
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
    unsigned int numCook=30;  //Number of cookies in one bag
    unsigned int numCals=300; //Number of calories in one serving
    unsigned int numServ=10;  //Number of servings in one bag
    unsigned int cookSrv;     //Number of cookies in each serving
    unsigned int calCook;     //Number of calories per cookie
    unsigned int cookEat;     //Quantity of cookies eaten by user
    unsigned int totCals;     //Total number of calories consumed
    
    //Calculate 
    cookSrv=numCook/numServ;  //Equation for the number of cookies per serving
    calCook=numCals/cookSrv;  //Equation for the number of calories per cookie
    
    //Input of Variables
    cout<<"Enter the quantity of cookies eaten: "<<endl;
    cin>>cookEat;
    
    //Calculate the Total Number of Calories Consumed
    totCals=cookEat*calCook; //Equation for the total number of calories consumed
    
    //Output of Results
    cout<<"The Total Number of Calories Consumed = "<<totCals<<" calories"<<endl;
    
    //Exit Stage Right!
    
    return 0;
}

