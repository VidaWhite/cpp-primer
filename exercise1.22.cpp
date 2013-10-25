#include <iostream>
#include "Sales_item.h"

int main(void) {
	Sales_item item1,item2;

	std::cout<<"Enter two transactions:\n"<<std::endl;
	std::cin>>item1>>item2;
	if(item1.same_isbn(item2)){
		std::cout<<"The total information:"<<std::endl;
		std::cout<<"ISBN, Numbers of copies sold, "
				 <<"total revenue, and average price are: "
				 <<std::endl<<item1+item2;
	}
	else
		std::cout<<"The two transactions have two different ISBN.\n"<<std::endl;
	return 0;
}