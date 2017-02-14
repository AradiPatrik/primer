#include "Dog.h"
#include "Collar.h"

Dog::Dog(){
	Collar col(*this);
	myCollar = &col;
}
