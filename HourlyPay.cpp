//Stephen Orsino
//Max Walters
//Nishant Thomas
//Project 3
//HourlyPay.cpp

#include "HourlyPay.h"
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

bool HourlyPay::SetHoursWorked(float hw)
{
	if (hw <= 60)
	{
		HoursWorked = hw;
		return true;
	}
	else
	{
		cout << "The number of hours worked cannot be greater than 60\n";
		return false;
	}
}

void HourlyPay::SetHourlyPayRate(float wp)
{
	HourlyPayRate = wp/40;
}

void HourlyPay::SetOTpayRate(float hr)
{
	OTpayRate = hr * 1.5;
}

void HourlyPay::SetFinalPay(float fp)
{
	FinalPay = fp;
}

float HourlyPay::GetHoursWorked()
{
	return HoursWorked;
}

float HourlyPay::GetHourlyPayRate()
{
	return HourlyPayRate;
}

float HourlyPay::GetOTpayRate()
{
	return OTpayRate;
}

float HourlyPay::GetFinalPay()
{
	return FinalPay;
}

