#include "Employee.h"

Employee::Employee()
{

}

Employee::Employee(string name,
	string numberPhone,
	string address,
	string salary,
	string dateOfEmployment)
{
	this->name = name;
	this->numberPhone = numberPhone;
	this->address = address;
	this->salary = salary;
	this->dateOfEmployment = dateOfEmployment;
}
Employee::~Employee()
{

}

void Employee::setName(const string &name)
{
	this->name = name;
}

void Employee::setNumberPhone(const string &numberPhone)
{
	this->numberPhone = numberPhone;
}

void Employee::setAddress(const string &address)
{
	this->address = address;
}

void Employee::setSalary(const string &salary)
{
	this->salary = salary;
}

void Employee::setDateOfEmployment(const string &dateOfEmployment)
{
	this->dateOfEmployment = dateOfEmployment;
}

string Employee::getName() const
{
	return name;
}

string Employee::getNumberPhone() const
{
	return numberPhone;
}

string Employee::getAddress() const
{
	return address;
}

string Employee::getSalary() const
{
	return salary;
}

string Employee::getDateOfEmployment() const
{
	return dateOfEmployment;
}