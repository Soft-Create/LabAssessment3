#include "stdafx.h"
#include "Student.h"
#include <iostream>

Student::Student(int age, std::string firstName, std::string lastName, std::string phone, std::string race):
	Person(age, firstName, lastName, phone, race)
{
}

Student::~Student()
{
	std::cout << "Student destructor called" << std::endl;
}

void Student::outputIdentity() const
{
	std::cout << "I am a student" << std::endl;
}

void Student::outputAge() const
{
	std::cout << "I am a student and ";
	Person::outputAge();
}
