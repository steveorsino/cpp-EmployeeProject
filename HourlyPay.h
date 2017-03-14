//Stephen Orsino
//Max Walters
//Nishant Thomas
//Project 3
//HourlyPay.h

#include "EmployeePay.cpp"
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

#ifndef HOURLYPAY_H
#define HOURLYPAY_H

class HourlyPay: public EmployeePay
{
	private:
		float HourlyPayRate, OTpayRate, HoursWorked, FinalPay;
	
	public:
		HourlyPay():EmployeePay()
		{
			HourlyPayRate = 0.0;
			OTpayRate = 0.0;
			HoursWorked = 0.0;
			FinalPay = 0.0;
		}
		
		bool SetHoursWorked(float);
		void SetHourlyPayRate(float);
		void SetOTpayRate(float);
		void SetFinalPay(float);
		
		float GetHoursWorked();
		float GetHourlyPayRate();
		float GetOTpayRate();
		float GetFinalPay();

	
};
#endif
