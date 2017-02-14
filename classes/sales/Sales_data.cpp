#include <iostream>
#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& other){

	if(this->isbn() == other.isbn()){

		this->units_sold += other.units_sold;
		this->revenue += other.revenue;
		
	}else{
		std::cout << "Book numbers have to match" << std::endl;
	}
	
	return *this;
}

double Sales_data::avg_price() const{
	if(units_sold)
		return this->revenue / this->units_sold;
	else
		return 0;
}

Sales_data add(const Sales_data& lhs, const Sales_data rhs){

	Sales_data result = lhs;
	result.combine(rhs);
	return result;

}

std::ostream &print(std::ostream& out, const Sales_data& item){
	out << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return out;
}

std::istream &read(std::istream& in, Sales_data& item){
	in >> item.bookNo >> item.units_sold >> item.revenue;
	return in;
}



