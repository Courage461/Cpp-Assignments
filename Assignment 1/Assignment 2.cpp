//NAME: AQUAH COURAGE EMENOBASI
//FACULTY:SCIENCE
//DEPT:COMPUTER SCIENCE
//REG NO:45295588FB
//COURSE:CSC TUTORIALS
//LECTURER:Mr.EKABA 
//ASSIGNMENT (2)
//DATE:18 MAY 2015.
///
///
///


#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	
	cout<<"WELCOME TO THIS PROGRAM, PLEASE INPUT YOUR NUMBERS:";
	cin>>num1 >>num2;
	
	if(num1 % num2==0)
	cout<<num1<<"correct, is a multiple of"<<num2<<endl;
	
	if(num1 %num2!=0)
	cout<<num1<<" wrong,is not a multiple of"<<num2<<endl;
	
	return 0;
}
