#pragma once

#include <iostream>
#include <string>
#include "Printable.h"
using namespace std;


class Employee : public Printable
{
	string name;
	string numberPhone;
	string address;
	string salary;
	string dateOfEmployment;
public:

	Employee();
	Employee(string name,
		string numberPhone,
		string address,
		string salary,
		string dateOfEmployment);
	~Employee();

	void setName(const string &name);
	void setNumberPhone(const string &numberPhone);
	void setAddress(const string &homeAddress);
	void setSalary(const string &wage);
	void setDateOfEmployment(const string &dateOfEmployment);

	string getName() const;
	string getNumberPhone() const;
	string getAddress() const;
	string getSalary() const;
	string getDateOfEmployment() const;

	void print() const
	{
		cout << "Name: " << name << endl;
		cout << "NumberPhone: " << numberPhone << endl;
		cout << "HomeAddress: " << address << endl;
		cout << "Wage: " << salary << endl;
		cout << "DateOfEmployment: " << dateOfEmployment << endl ;
	}
};
