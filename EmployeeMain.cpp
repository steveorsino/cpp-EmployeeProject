//Stephen Orsino
//Max Walters
//Nishant Thomas
//Project 3
//EmployeeMain.cpp

#include "HourlyPay.cpp"
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void PrintCheck(HourlyPay);

int main()
{
	HourlyPay Paycheck;
	string EmployeeName, Social, EmployeeID;
	float AnnualPay, WeeklyPay, FinalPay, HoursWorked;
	
	cout << "\n\n\tMSN Tech Corp Employee Payroll Dept.\n\n";
	cout << "Enter the name of the employee: ";
	getline(cin, EmployeeName);
	Paycheck.SetName(EmployeeName);
	
	do{
		cout << "Enter the employee's social security number: ";
		cin >> Social;
	}while(!Paycheck.SetSocial(Social));
	
	do{
		cout << "Enter the employee's ID: ";
		cin >> EmployeeID;
	}while(!Paycheck.SetEmpNum(EmployeeID));
	
	do{
		cout << "Enter number of hours worked: ";
		cin >> HoursWorked;	
	}while(!Paycheck.SetHoursWorked(HoursWorked));
	
	do {
		cout << "Enter the employee's annual pay: ";
		cin >> AnnualPay;
	}while (!Paycheck.SetAnnualPay(AnnualPay));
	
	WeeklyPay = Paycheck.GetWeeklyPay();
	Paycheck.SetHourlyPayRate(WeeklyPay);
	
	if (HoursWorked > 40)
	{
		Paycheck.SetOTpayRate(Paycheck.GetHourlyPayRate());
		FinalPay = (HoursWorked - 40) * Paycheck.GetOTpayRate() + WeeklyPay;
	}
	else
		FinalPay = WeeklyPay;

	Paycheck.SetFinalPay(FinalPay);
/*  Used for testing purposes
	cout << Paycheck.GetName()<<" ," << Paycheck.GetEmpNum() << " ," << Paycheck.GetSocial() << " ," << Paycheck.GetWeeklyPay() << " ," << Paycheck.GetOTpayRate() << " ," << FinalPay << " ," << Paycheck.GetHourlyPayRate()<<" ," << Paycheck.GetFinalPay() << ".\n";
*/
	PrintCheck(Paycheck);
	
	return 0;
}

void PrintCheck(HourlyPay pcheck)
{
	cout << fixed << setprecision(2);
	cout << "\t ________________________________________________\n";
	cout << "\t|                                                |\n";
	cout << "\t| pay to the order of:                  07-27-16 |\n";
	cout << "\t|" << setw(21) << pcheck.GetName() << "                           |\n";
	cout << "\t| Emp ID: " << pcheck.GetEmpNum() << "                         $" << setw(8) << left << pcheck.GetFinalPay() <<"|\n";
	cout << "\t| Emp SSN:" << pcheck.GetSocial() << "                            |\n";
	cout << "\t|                                                |\n";
	cout << "\t|                                 MSN Tech corp. |\n";
	cout << "\t|________________________________________________|\n\n";

/*
	cout << "\t ________________________________________________\n";
	cout << "\t|                                                |\n";
	cout << "\t| pay to the order of:                  07-27-16 |\n";
	cout << "\t|        SAMPLE NAME                             |\n";
	cout << "\t| Emp ID: ###-L                         $1000.00 |\n";
	cout << "\t| Emp SSN:xxx-xx-####                            |\n";
	cout << "\t|                                                |\n";
	cout << "\t|                                 MSN Tech corp. |\n";
	cout << "\t|________________________________________________|\n\n";
*/
	
}
