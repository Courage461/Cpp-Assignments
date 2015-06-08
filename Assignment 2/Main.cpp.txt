/*
* main.cpp
* HealthProfile program . This file represents HealthProfile's public
* interface without revealing implementations of HealthProfile's member
* functions, which are defined in HealthProfile.cpp
*
* Stub file for Programming Assignment #2
*
* Name: [AQUAH COURAGE EMENOBASI ]
* Matric No: [ 45302014HG]
* Department: [ COMPUTER SCIENCE ]
*
*/

#include <iostream>
#include <string> 				 // uses C++ string class
#include "HealthProfile.h"		 // include definition of class HealthProfile
using namespace std;
int main()

{

// Variable declarations

string firstName;
string lastName;
string gender;
int month;
int day;
int year;
double height;
int weight;
int currentDay;
int currentMonth;
int currentYear;

// Prompt for patient information

cout << "Welcome to our program to computerize healthcare records\n";
cout << "please fill-in your information as requested. Thank you\n";
cout << "\nKindly enter todays day, month and year using numeric representations only\n";
cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";

// TODO: Put your code to receve input from user here

std::cout << "First_Name"; 
std::cin >> firstName; 

std::cout << "last_Name";
std::cin >> lastName;

std::cout << "gender of patients";
std::cin >> gender;

std::cout << "your_year";
std::cin >> year;

std::cout << "your_month";
std::cin >> month;

std::cout << "your Day of birth";
std::cin >> day;

std::cout<< "Your height";
std::cin>> height;

std::cout<< "your Weight";
std::cin>> weight;

// Instantiate an object of class HealthProfile - passing relevant values to the constructor
HealthProfile nameObject (firstName, lastName, gender, month, day, year, weight, height, currentDay, currentMonth, currentYear);

// Print information from the object - by calling getInformation() function
nameObject.getInformation();

}  