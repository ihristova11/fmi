#include <cstring>
#include <fstream>
#include "Person.h"

Person::Person()
{
	this->name = nullptr;
	this->age = 0;
	this->hasLicence = false;
}

Person::Person(char* name, int age, bool hasLicence)
{
	this->name = name;
	strcpy_s(this->name, strlen(name) + 1, name);

	this->age = age;
	this->hasLicence = hasLicence;
}

Person::Person(const Person& person)
{
	// todo check if it is the same
	this->name = new char[strlen(person.name) + 1];
	this->age = person.age;
	this->hasLicence = person.hasLicence;
}

Person& Person::operator=(const Person&)
{
	// TODO: insert return statement here
}

bool Person::operator==(const Person& person)
{

	return strcmp(this->name, person.name) == 0 
		&& this->age == person.age 
		&& this->hasLicence == person.hasLicence;
}

void Person::setName(char* name)
{

}

void Person::setAge(int age)
{
	this->age = age;
}

void Person::setHasLicence(bool hasLicence)
{
	this->hasLicence = hasLicence;
}

char* Person::getName()
{
	return this->name; // todo copy of this
}

int Person::getAge()
{
	return this->age; // copy of this
}

bool Person::getHasLicence()
{
	return this->hasLicence; // should return copy of this
}

void Person::print(const Person& person, std::ostream out)
{
	out << person.name << " " << person.age << " " << person.hasLicence << std::endl;
}

Person::~Person()
{

}
