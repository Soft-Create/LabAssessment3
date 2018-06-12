#pragma once
#include "Person.h"

class Teacher :public Person {
public:
	Teacher(int age, std::string firstName, std::string lastName, std::string phone, std::string race);
	virtual ~Teacher();
	virtual void outputIdentity() const;
	virtual void outputAge() const;
};
