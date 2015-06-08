/*
*
* HealthProfile.h
*
* HealthProfile class definition. This file represents HealthProfile's public
*
* interface without revealing implementations of HealthProfile's member
*
* functions, which are defined in HealthProfile.cpp
*
* Stub file for Programming Assignment #2
*
* Name: [ AQUAH COURAGE EMENOBASI ]
*
* Matric No: [ 45302014HG]
*
* Department: [ COMPUTER SCIENCE ]
*
*/

#include <string> // uses C++ string class

using namespace std;

// HealthProfile class definition
class HealthProfile

{

// public interface
 
public:

		HealthProfile( string, string, string, int, int, int, int, double, int, int, int ) {} // constructor that initializes patient information
		
		int getAge();                  // function to get patients age in years
		
		double getBMI();               // function to calculate and return BMI
																
		int getMaximumHeartRate();     // function to calculate and return maximum heart rate
		
		double getTargetHeartRate();   // function to calculate and return target heart rate
		
		void getInformation() {}       // function to print object information

// TODO: Provide get and set function prototypes of each class attribute

		string getfirstName();         // function is to get patients first name 
        void setFirstName( string );   // function is to set patients first name
        
		string getlastName();          // function is to get patients last name
        void setlastName( string );    // function is to set patients last name
        
		string getGender();            // function is to get patients gender
        void setGender( string );      // function is to set patients gender 
        
		int getDay();                  // function is to get patients day of birth
        void setDay( int ); 		   // function is to set patients day of birth
        
		string getMonth();             // function is to get patients month of birth
        void setMonth( int );          // funtion is to set patients month of birth
        
		int getYear();                 // function is to get patients year of birth
        void setYear( int year );      // funtion is to set patients year of birth
        
		int getWeight();               // function is to get the weight of the patients
        void setWeight( int weight );  // function is to set patient's weight 
        
		int getHeight(); 			   // function is to get the height of the patients
        void setHeight( double ); 	   // function is to set the height of patients
        
// Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
// getTargetHeartRate() and getInformation() has alrady been provided

// private interface
private:

		string firstName;              // variable to hold firstname
		string lastName;               // variable to hold lastname
		string gender;                 // variable to hold gender
		int month;                     // variable to hold month
		int day;                       // variable to hold day
		int year;                      // variable to hold year
		double height;                 // variable to hold height
		int weight;                    // variable to hold weight
		int age;                       // variable to hold age

};                                     // end class HealthProfile