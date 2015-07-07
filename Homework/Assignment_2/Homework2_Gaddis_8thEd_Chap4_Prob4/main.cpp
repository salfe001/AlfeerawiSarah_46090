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
    float length1;  //Length of rectangle 1
    float width1;   //Width of rectangle 1
    float area1;    //Area of rectangle 1
    float length2;  //Length of rectangle 2
    float width2;   //Width of rectangle 2
    float area2;    //Area of rectangle 2
    
    //Input of Variables
    cout<<"Enter the length of rectangle 1"<<endl;
    cin>>length1;
    cout<<"Enter the width of rectangle 1"<<endl;
    cin>>width1;
    cout<<"Enter the length of rectangle 2"<<endl;
    cin>>length2;
    cout<<"Enter the width of rectangle 2"<<endl;
    cin>>width2;
    
    //Calculate the Areas
    area1=length1*width1;  //Equation to calculate area of rectangle 1
    area2=length2*width2;  //Equation to calculate area of rectangle 2
    
    //Output of Results
    cout<<"The area of rectangle 1 = "<<area1<<endl;
    cout<<"The area of rectangle 2 = "<<area2<<endl;
    
    //Juxtapose Results
    if (area1>area2){
        cout<<"Rectangle 1 has greater area"<<endl;
    }
    if (area2>area1){
        cout<<"Rectangle 2 has greater area"<<endl;
    }
    if (area1==area2){
        cout<<"The areas are the same"<<endl;
    }
    
    return 0;
}

