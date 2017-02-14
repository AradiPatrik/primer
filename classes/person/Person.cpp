#include <iostream>
#include <string>
#include "Person.h"

std::istream& read(std::istream& in, Person& person){
	in >> person.name >> person.address;
	return in;
}
std::ostream& print(std::ostream& out, const Person& person){
	out << person.name << " " << person.address;
	return out;
}
