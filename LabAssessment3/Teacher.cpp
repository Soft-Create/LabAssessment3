#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

Teacher::Teacher(int age, std::string firstName, std::string lastName, std::string phone, std::string race):
	Person(age, firstName, lastName, phone, race)
{
}

Teacher::~Teacher()
{
	std::cout << "Teacher destructor called" << std::endl;
}

void Teacher::outputIdentity() const
{
	std::cout << "I am a teacher" << std::endl;
}

void Teacher::outputAge() const
{
	std::cout << "I am a teacher and ";
	Person::outputAge();
}
