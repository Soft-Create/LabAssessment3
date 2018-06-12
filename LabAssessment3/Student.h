#pragma once
#include "Person.h"

class Student :public Person {
public:
	Student(int age, std::string firstName, std::string lastName, std::string phone, std::string race);
	virtual ~Student();
	virtual void outputIdentity() const;
};
