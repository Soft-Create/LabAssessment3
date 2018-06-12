#pragma once
#include <string>

class Person{
private:
	int _age;
protected:
	std::string _firstName,_lastName,_phone,_race;
	virtual void outputIdentity() const = 0;
	virtual void outputAge() const;
public:
	Person(int age, std::string firstName, std::string lastName, std::string phone, std::string race);
	virtual ~Person();
};