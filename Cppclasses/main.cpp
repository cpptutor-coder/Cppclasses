#include "person.h"
#include <iostream>
#include <vector>

void PrintOut(n1::Person p)
{
	if (p.CanIDrive())
		std::cout << p.GetName() << ". You can drive!!! " << std::endl;
	else
		std::cout << p.GetName() << ". Sorry have to wait." << std::endl;
}

int main()
{
	n1::Person p1("John", 15);
	std::cout << p1.GetName() << std::endl;

	n1::Person p2("Ally", 20);
	std::cout << p2.GetName() << std::endl;

	PrintOut(p1);
	PrintOut(p2);
}