/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: To Calculate Profits
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    string movieNm;       //Name of Movie
    float adltCst=10.00f; //Cost of adult ticket
    float chldCst=6.00f;  //Cost of child ticket
    float rvnuPCT=.20f;   //Percentage of profit kept by theater as revenue
    int adltTck;          //Number of adult tickets sold
    int chldTck;          //Number of child tickets sold
    float grsProf;        //Gross Box Office Profit
    float netProf;        //Net Box Office Profit
    float dstProf;        //Amount Paid to Distributor
    
    //Input of Variables
    cout<<"Enter a movie name: "<<endl;
    getline(cin,movieNm); //User prompted to input a movie name
    cout<<"Enter the number of adult tickets sold: "<<endl;
    cin>>adltTck;         //User prompted to input number of adult tickets sold
    cout<<"Enter the number of child tickets sold: "<<endl;
    cin>>chldTck;         //User prompted to input number of child tickets sold
    
    //Calculate the Gross Profit, Net Profit, and Amount Paid to Distributor
    grsProf=(adltCst*adltTck+chldCst*chldTck); //Equation for gross profit
    netProf=grsProf*rvnuPCT;                   //Equation for net profit
    dstProf=grsProf-netProf;                   //Equation for distributor profit
    
    //Output of Results
    cout<<"Movie Name:                 "<<movieNm<<endl;
    cout<<"Adult Tickets Sold:         "<<adltTck<<endl;
    cout<<"Child Tickets Sold:         "<<chldTck<<endl;
    cout<<"Gross Box Office Profit:    $"<<grsProf<<showpoint<<fixed<<setprecision(2)<<endl;
    cout<<"Net Box Office Profit:      $"<<netProf<<showpoint<<fixed<<setprecision(2)<<endl;
    cout<<"Amount Paid to Distributor: $"<<dstProf<<showpoint<<fixed<<setprecision(2)<<endl;
    
    //Exit Stage Right!
    
    return 0;
}

