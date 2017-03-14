//Stephen Orsino
//Max Walters
//Nishant Walters
//Project 3
//July 27, 2016
//Employee.cpp
#include "Employee.h"
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


void Employee::SetName(string n)
{
	name = n;
}

bool Employee::SetSocial(string ss)
{
	
	if(ss.length()!=11)
	{
		cout << "The social security number must be in 'xxx-xx-xxxx' form with x being 0 - 9.\n";
			return false;
	}

	for(int i = 0; i < 3; i++)
	{
		if(!isdigit(ss.at(i)))
		{
			cout << "The social security number must be in 'xxx-xx-xxxx' form with x being 0 - 9.\n";
			return false;
		}
	}
	if(ss.at(3)!='-')
	{
		cout << "The social security number must be in 'xxx-xx-xxxx' form with x being 0 - 9.\n";
		return false;
	}
	
	for(int i = 4; i < 6; i++)
	{
		if(!isdigit(ss.at(i)))
		{
			cout << "The social security number must be in 'xxx-xx-xxxx' form with x being 0 - 9.\n";
			return false;
		}
	}
	if(ss.at(6)!='-')
	{
		cout << "The social security number must be in 'xxx-xx-xxxx' form with x being 0 - 9.\n";
		return false;
	}
	
	for(int i = 7; i < 11; i++)
	{
		if(!isdigit(ss.at(i)))
		{
			cout << "The social security number must be in 'xxx-xx-xxxx' form with x being 0 - 9.\n";
			return false;
		}
	}
	
	social = ss;
	return true;
	
}
bool Employee::SetEmpNum(string en)
{
	if(en.length()!= 5)
	{
		cout << "The employee ID must be in 'xxx-L' form with x being 0 - 9 and L being A - M.\n";
		return false;
	}

	for(int i = 0; i < 3; i++)
	{
		if(!isdigit(en.at(i)))
		{
			cout << "The employee ID must be in 'xxx-L' form with x being 0 - 9 and L being A - M.\n";
			return false;
		}
	}
	if(en.at(3)!='-')
	{
		cout << "The employee ID must be in 'xxx-L' form with x being 0 - 9 and L being A - M.\n";
		return false;
	}

	if (en.at(4) != 'A' && en.at(4) != 'B' && en.at(4) != 'C'
			&& en.at(4) != 'D' && en.at(4) != 'E' && en.at(4) != 'F'
			&& en.at(4) != 'G' && en.at(4) != 'H' && en.at(4) != 'I'
			&& en.at(4) != 'J' &&  en.at(4) != 'K' &&  en.at(4) != 'L'
			&&  en.at(4) != 'M')
	{
		cout << "The employee ID must be in 'xxx-L' form with x being 0 - 9 and L being A - M.\n";
		return false;
	}

	
	empNumb = en;
	return true;	
}


string Employee::GetName()
{
	return name;
}
string Employee::GetSocial()
{
	return social;
}
string Employee::GetEmpNum()
{
	return empNumb;
}


