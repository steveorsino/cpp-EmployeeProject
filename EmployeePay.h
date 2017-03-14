//Stephen Orsino
//Max Walters
//Nishant Walters
//Project 3
//July 27, 2016
//EmployeePay.h

#include "Employee.cpp"
using namespace std;

#ifndef EMPLOYEEPAY_H
#define EMPLOYEEPAY_H

class EmployeePay:public Employee
{
	
	private:
	float anpay;
	float wpay;
	
	public:
	EmployeePay():Employee()
	{
		anpay = 0;
		wpay = 0;
	}
	
	bool SetAnnualPay(int);

	float GetAnnualPay();
	float GetWeeklyPay();


};

#endif
