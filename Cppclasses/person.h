#pragma once
#include <string>

namespace n1
{
	class Person
	{
	public:
		Person(std::string name, int age);
		std::string GetName();
		int GetAge();
		bool CanIDrive();

		std::string m_name;
		int m_age;
	};
}