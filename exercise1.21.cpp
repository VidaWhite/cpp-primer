#include <iostream>
#include "Sales_item.h"

int main(void){
	Sales_item book;

	//����ISBN,�۳���ı���,���ۼ۸�

	std::cout<<"Enter transactions: "<<std::endl;
	while(std::cin>>book){
		//���ISBN,�۳���ı��飬�����룬ƽ���۸�
		std::cout<<"ISBN, number of coples sold, "
				 <<"total revenue, and average price are:"
				 <<std::endl;
		std::cout<<book<<std::endl;
	}
}