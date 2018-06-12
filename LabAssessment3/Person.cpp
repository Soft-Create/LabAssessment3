#include "stdafx.h"
#include "Person.h"
#include <iostream>

void Person::outputAge() const
{
	std::cout << "I am " << _age << " years old" << std::endl;
}

Person::Person(int age, std::string firstName, std::string lastName, std::string phone, std::string race)
{
	_age = age;
	_firstName = firstName;
	_lastName = lastName;
	_phone = phone;
	_race = race;
}

Person::~Person()
{
	std::cout << "Person destructor called" << std::endl;
}
