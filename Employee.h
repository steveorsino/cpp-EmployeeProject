//Stephen Orsino
//Max Walters
//Nishant Walters
//Project 3
//July 27, 2016
//Employee.h
#include <iostream>
#include <string>
using namespace std;


#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee
{
private:
	string name, empNumb, social;

public:
	Employee()
	{
		name = "Default Name";
		social = "000-00-0000";
		empNumb = "000-A";
	
	}


	void SetName(string);
	bool SetSocial(string);
	bool SetEmpNum(string);

	string GetName();
	string GetSocial();
	string GetEmpNum();
};
#endif
