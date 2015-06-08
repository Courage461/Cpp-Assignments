/*
* HealthProfile.cpp
* HealthProfile member-function definitions. This file contains
* implementations of the member functions prototyped in HealthProfile.h
*
* Stub file for Programming Assignment #2
*
* Name: [ AQUAH COURAGE EMENOBASI ]
* Matric No: [ 45302014HG]
* Department: [ COMPUTER SCIENCE ]
*
*/

#include <iostream>
#include <string>												 // uses C++ string classint day, int year, int weight, double height, int currentDay,
#include <math.h>												 // uses C++ math class
#include <iomanip>												 // used iomanip class to format output text
#include "HealthProfile.h"										 // include definition of class HealthProfile

using namespace std;
                                                                  
// constructor initializes patient information

HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month, int Day, int year, int weight, double Height, int currentDay, int currentMonth, int currentYear)
{  

string setFirstName(firstName);			 						 // call set function to initialize firstname
string setLastName(lastName); 						             // call set functions to initializelast name
string setGender(gender); 				 						 //all set function to initialize gender
int setMonth(month); 					 						 // call set function to initialize month
int setDay(day); 						 						 // call set function to initialize day
int setYear (year); 					 						 // call set function to initialize year
int setWeight( weight ); 				 						 // call set function to initialize weight
double setHeight( height ); 			 						 // call set function to initialize height
int setAge( int currentDay, int currentMonth, int currentYear ); // call set function to calculate age

}


// funtion to print object information

void HealthProfile::getInformation()

{

cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
cout << "First Name: " << setw(17) << getFirstName() << endl;
cout << "Last Name: " << setw(19) << getLastName() << endl;
cout << "Gender: " << setw(20) << getGender() << endl;
cout << "Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
cout << "Weight (in kilograms): " << setw(3) << getWeight() << endl;
cout << "Height (in meters): " << setw(10) << getHeight() << endl;
cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
cout << "\nBMI VALUES CHART" << endl;
cout << "Underweight: less than 18.5" << endl;
cout << "Normal: between 18.5 and 24.9" << endl;;
cout << "Overweight: between 25 and 29.9" << endl;
cout << "Obese: 30 or greater" << endl;

}

// TODO: Provide implementaion details for functions in HealthProfileStub.h

void HealthProfile::setFirstName(string First_Name); 			// function to set FirstName of patient
{	
    FirstName = First_Name;			 							// function stored firstName in object
}

string HealthProfile::getfirstName();						    // function to get FirstName of patient
{	
	return FirstName; 											// function returns first name
}

void HealthProfile::setlastName(string Your Last_Name); 		// function to set patients last name
{	
	LastName = Your_LastName; 									// function stores LastName in object
}

string HealthProfile::getlastName();						    // function to get patients last name
{
	return LastName; 											// function returns last name
}

void HealthProfile::setGender(string patients_Gender);			// function is to set patients gender
{
	Gender = Patients_Gender; 									// functions stores Patients Gender in object
}

string HealthProfile::getGender(); 								// function is to get patients gender
{
	return Gender;												// function returns patients gender
}

void HealthProfile::setYear(int your_Year);						// function is to set patients year of birth
{
	Year = your_year; 											// function stores patients year in object
}

string HealthProfile::getYear(); 								// function is to get patients year of birth
{
	return Year; 												// function returns patients year of birth
}

void HealthProfile::setMonth(int Your_Month); 					// function is to set patients birth month
{
	Month = your_month;											// function stores patients month in object
}

string HealthProfile::getMonth(); 								// function is to get patients birth month
{
	return Month; 												// function returns patients month
}

void HealthProfile::setDay(int your_Day of birth);				// function is to set day of patients birth
{
	Day = Your_Day; 											// function stores patients day in object
}

string HealthProfile::getDay();									// function is to get day of paients birth
{
	return Day; 												// function returns patients day
}

void HealthProfile::setWeight(int your_Weight);					// function is to set patients weight
{
	Weight = Your_Weight;										// function stores patients weight in object 
}

string HealthProfile::getWeight();								// function is to get patients weight
{
	return weight; 												// function is to return patients weight 
}

void HealthProfile::setHeight(double your_Height); 				// function is to set patients height
{
	Height = Your_Height; 										// function stores patients height in object
}

string HealthProfile::getHeight(); 								// function is to get patients height
{
	return Height; 												// function return patients height 
}

void HealthProfile::setHealthProfile::setAge(int currentDay, int currentMonth, int currentyear); // function to set patients age
{
	Age = currentYear - Year;									 // function is to calculate age
}


string HealthProfile::getHaelthProfile::getAge();				 // function is to get age of patient
{
	return Age; 												 // function return patients age
}

double HealthProfile::getBMI(); 								 // function to get patients BMI
{
	double BMI; 												 // function is to declare BMI
	BMI = W/(h*h);												 // function is to caculate BMI
	return BMI;													 // function to return BMI

int HealthProfile::getMaximumHeartRate();						 // function to get MaximumHeightRate
{																 
	int MHR;													 // function to declare MHR
	MHR = 220 - Age;											 // function to caculate MHR
	return MHR;													 // function to return MHR

}

double HealthProfile::getTargetHeartRate();                      // function to get TargetHeartRate
{
	THR = 50/100 - 85/100 * MHR									 // function to caculate THR
	retun THR;													 // function to return THR
}

// Implementation for the constructor and getInformation function has already been provided