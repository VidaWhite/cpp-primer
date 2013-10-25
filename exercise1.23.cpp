#include <iostream>
#include "Sales_item.h"

int main(void){
	Sales_item total, item;
	if(std::cin>>total){
		while(std::cin>>item)
			if(total.same_isbn(item))
				total = total + item;
			else{
				std::cout<<"Different ISBN"<<std::endl;
				return 1;
			}

			std::cout<<total<<std::endl;
		}
	else{
		std::cout<<"No data!"<<std::endl;
		return -1;
	}
	return 0;
}
