#include "Office.h"

Office::Office()
{

}
Office::Office(string officeName,
	string area,
	string amountEmployee)
{
	this->officeName = officeName;
	this->area = area;
	this->amountEmployee = amountEmployee;
}

Office::~Office()
{

}

void Office::setOfficeName(const string &officeName)
{
	this->officeName = officeName;
}

void Office::setArea(const string &area)
{
	this->area = area;
}

void Office::setAmountEmployee(const string &amountEmployee)
{
	this->amountEmployee = amountEmployee;
}

string Office::getOfficeName() const
{
	return officeName;
}

string Office::getArea() const
{
	return area;
}

string Office::getAmountEmployee() const
{
	return amountEmployee;
}

