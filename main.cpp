//Unit7_Quiz_Monsivais Dr T

#include <iostream>
#include <string>

using namespace std;

struct wristWatch
{
 float price;
 bool usesBattery;
 bool isSmartWatch;
 bool hasDiamonds;
};


void printWristwatch(wristWatch *ww)
{
    cout << "\t\nWristWatch Options" << endl;
  cout << "Price = $" << ww->price << endl;
  cout << "usesBattery - " << ww->usesBattery << endl;
  cout << "isSmartWatch - " << ww->isSmartWatch  << endl;
  cout << "hasDiamonds - " << ww->hasDiamonds << endl;
}
int main()
{
   
   //declaring an array struct
   wristWatch watches[3];
  watches[0] = {100,true,false,false};
   watches[1] = {500,true,true,true};
   watches[2] = {2500,true,true,true};

cout <<boolalpha; // changes the 1/0 of bool to true/false

//output wristwatch array
printWristwatch(&watches[0]);
printWristwatch(&watches[1]);
printWristwatch(&watches[2]);

  return 0;
}




//Write a program that does the following:

//Creates a structure for WristWatch - price float, usesBattery bool , isSmartWatch bool, hasDiamonds bool

//Add unique WristWatch structures to an array.

//Write a function to display the contents of the array.