//Stephen Orsino
//Max Walters
//Nishant Walters
//Project 3
//July 27, 2016
//EmployeePay.cpp


#include "EmployeePay.h"
#include<iostream>
using namespace std;

	bool EmployeePay::SetAnnualPay(int ap)
	{
		if(ap >= 0)
		{
			anpay = ap;
			wpay = (ap/52);
			return true;
		}
		else
		{
			cout<<"Pay must be greater than or equal to 0."<<endl;
			return false;
		}
		
	}

	float EmployeePay::GetAnnualPay()
	{
		return anpay;
	}
	
	float EmployeePay::GetWeeklyPay()
	{
		return wpay;
	}
