#include "person.h"

n1::Person::Person(std::string name, int age)
{
	m_name = name;
	m_age = age;
}

std::string n1::Person::GetName()
{
	return m_name;
}

int n1::Person::GetAge()
{
	return m_age;
}

bool n1::Person::CanIDrive()
{
	if (m_age < 18)
		return false;

	return true;
}