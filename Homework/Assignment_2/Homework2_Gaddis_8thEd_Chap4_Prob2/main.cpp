/* 
 * File:   main.cpp
 * Author: Sarah Alfeerawi
 * Created on July 5, 2015, 9:50 PM
 * Purpose: To Switch from Number to Roman Numeral
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
    int romNum;  //Number to be converted to Roman Numeral
    
    //Input of Variable
    cout<<"Enter a number within the range of 1 through 10: "<<endl;
    cin>>romNum;  //Prompts user to input a number between 1 and 10
    
    if(romNum<1 || romNum>10)
    {
        cout<<"Input value out of range: "<<endl;
        cout<<"Enter a number: "<<endl;
        cin>>romNum;  //Prompts user to input a number outside the range
    }
    switch (romNum)   
    {   //Begin switch
        case 1: cout<<"I"<<endl;
                break;
        case 2: cout<<"II"<<endl;
                break;
        case 3: cout<<"III"<<endl;
                break;
        case 4: cout<<"IV"<<endl;
                break;
        case 5: cout<<"V"<<endl;
                break;
        case 6: cout<<"VI"<<endl;
                break;
        case 7: cout<<"VII"<<endl;
                break;
        case 8: cout<<"VIII"<<endl;
                break;
        case 9: cout<<"IX"<<endl;
                break;
        case 10: cout<<"X"<<endl;
                break;
    }   //End Switch
    
    
    
    
    return 0;
}

