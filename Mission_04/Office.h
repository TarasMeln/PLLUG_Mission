#pragma once

#include <iostream>
#include <string>
#include "Printable.h"
using namespace std;


class Office : public Printable
{
	string officeName;
	string area;
	string amountEmployee;

public:

	Office();
	Office(string officeName,
		string area,
		string amountEmployee);
	~Office();

	void setOfficeName(const string &officeName);
	void setArea(const string &area);
	void setAmountEmployee(const string &amountEmployee);

	string getOfficeName() const;
	string getArea() const;
	string getAmountEmployee() const;

	void print() const
	{
		cout << "OfficeName: " << officeName << endl;
		cout << "Area: " << area << endl;
		cout << "AmountEmployee: " << amountEmployee << endl;
	}
};

