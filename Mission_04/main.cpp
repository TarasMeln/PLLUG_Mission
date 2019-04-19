#include <iostream>
#include <vector>
#include "Employee.h"
#include "Office.h"

void printList(const std::vector<Printable *> listToPrint)
{
	for (auto item : listToPrint)
	{
		item->print();
		std::cout << std::endl;
	}
}

int main()
{
	std::vector<Printable *> employeesToPrint;


	Employee employee1("Taras", "+38 093 00 99 297", "Grinchenka", "1500$", "1990");
	Employee employee2("Sashko", "+38 093 53 23 422", "Balas", "3000$", "1978");
	Employee employee3("Sviatoslav", "+38 093 99 00 231", "Grove Street", "2000$", "2000");


	employeesToPrint.push_back(&employee1);
	employeesToPrint.push_back(&employee2);
	employeesToPrint.push_back(&employee3);

	printList(employeesToPrint);

	std::cout << std::endl;

	std::vector<Printable *> officesToPrint;

	Office office1("TarasCompany", "1000", "1500");
	Office office2("SashkoCompany", "2500", "1");
	Office office3("Sviatoslav Ink.", "2000", "15");

	officesToPrint.push_back(&office1);
	officesToPrint.push_back(&office2);
	officesToPrint.push_back(&office3);

	printList(officesToPrint);


	system("pause");
}