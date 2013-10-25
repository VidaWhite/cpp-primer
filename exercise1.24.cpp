#include <iostream>
#include "Sales_item.h"

int main(void){
	Sales_item item1, item2;
	int amount;

	std::cout<<"Enter transactions:"<<std::endl;
	std::cin>>item1;
	amount = 1;
	while(std::cin>>item2)
		if(item1.same_isbn(item2))
			++amount;
		else{
			std::cout<<"Transaction amount of the previous ISBN:"<<amount<<std::endl;
			item1 = item2;
			amount = 1;
		}
		std::cout<<"Transaction amount of the last ISBN: "<<amount<<std::endl;

		return 0;
}