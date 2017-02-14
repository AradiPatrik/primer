#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
	
	Sales_data item0;
	Sales_data item1("42");
	Sales_data item2("69", 10, 100.0);
	Sales_data item3(cin);
	
	print(cout, item0) << endl;
	print(cout, item1) << endl;
	print(cout, item2) << endl;
	print(cout, item3) << endl;
	
	return 0;

}
