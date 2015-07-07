/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: To Juxtapose the Areas of Two Rectangles
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
    int P=1;        //Penny Value in Cents
    int N=5;        //Nickel Value in Cents
    int D=10;       //Dime Value in Cents
    int Q=25;       //Quarter Value in Cents
    int dolVal=100; //Value of dollar in Cents
    int numPen;     //Number of Pennies
    int numNick;    //Number of Nickels
    int numDime;    //Number of Dimes
    int numQuar;    //Number of Quarters
    int totCoin;    //Total Coin Value in Cents
    
    //Input of Number of Pennies, Nickels, Dimes, and Quarters
    cout<<"Enter the number of pennies: "<<endl;
    cin>>numPen;
    cout<<"Enter the number of nickels: "<<endl;
    cin>>numNick;
    cout<<"Enter the number of dimes: "<<endl;
    cin>>numDime;
    cout<<"Enter the number of quarters: "<<endl;
    cin>>numQuar;
    
    //Calculate the Total Coin Value
    totCoin=(P*numPen+N*numNick+D*numDime+Q*numQuar);  //Equation for total
    
    //Output of Results
    cout<<"The total coin value = "<<totCoin<<" (cents)"<<endl;
    
    //Check If Total Coins Equals One Dollar
    if(totCoin==100){
        cout<<"Congratulations!You won the game!"<<endl;
    }
    if(totCoin<100){
        cout<<"Amount entered is less than a dollar."<<endl;
    }
    if(totCoin>100){
        cout<<"Amount entered is more than a dollar."<<endl;
    }
    return 0;
}

