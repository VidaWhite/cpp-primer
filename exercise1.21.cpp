#include <iostream>
#include "Sales_item.h"

int main(void){
	Sales_item book;

	//读入ISBN,售出书的本书,销售价格

	std::cout<<"Enter transactions: "<<std::endl;
	while(std::cin>>book){
		//输出ISBN,售出书的本书，总收入，平均价格
		std::cout<<"ISBN, number of coples sold, "
				 <<"total revenue, and average price are:"
				 <<std::endl;
		std::cout<<book<<std::endl;
	}
}