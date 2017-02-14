#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person{

friend std::istream& read(std::istream&, Person&);
friend std::ostream& print(std::ostream&, const Person&);

private:
	
	std::string name;
	std::string address;

public:

	Person() = default;
	Person(const std::string& n, const std::string& a): 
		name(n), address(a){ }
	Person(std::istream in){ read(in, *this); }
	std::string getName() const { return this->name; };
	std::string getAddress() const { return this->address; };

};

std::istream& read(std::istream&, Person&);
std::ostream& print(std::ostream&, const Person&);

#endif
